from flask import Blueprint
from app.lib import get_json
from app.models.user import User
from app.models.room import Room
from datetime import datetime
from app.core import db

import pytz

blueprint = Blueprint('roomcreate', __name__)


@blueprint.route('/roomcreate', methods=['POST'])
def roomcreate():
    # jsonリクエストから値取得
    data = get_json()

    room_number = data['room_number']
    user_uuid = data['user_uuid']

    user = User.query.filter_by(uuid=user_uuid).first()
    if (user == None):
        return 'False,不正なユーザーです'
    else:
        room = Room(
            room_number=room_number,
            created_at=datetime.now(pytz.timezone('Asia/Tokyo')),
            user_id=user.id
        )

        # エラーが出たらロールバック
        try:
            # dbにroomを登録
            db.session.add(room)
            db.session.commit()
            return 'True'
        except Exception as e:
            db.session.rollback()
            return 'False,' + str(type(e).__name__)
