from flask import Blueprint
from app.lib import get_json
from app.models.user import User
from app.models.room import Room
from app.core import db

blueprint = Blueprint('roomdelete', __name__)


@blueprint.route('/roomdelete', methods=['POST'])
def roomdelete():
    # jsonリクエストから値取得
    data = get_json()

    room_number = data['room_number']
    user_uuid = data['user_uuid']

    user = User.query.filter_by(uuid=user_uuid).first()
    room = Room.query.filter_by(room_number=room_number).first()

    # オーナーか判断
    if (room.user_id == user.id):

        # エラーが出たらロールバック
        try:
            # dbからroomを削除
            db.session.delete(room)
            db.session.commit()
            return 'True'
        except Exception as e:
            db.session.rollback()
            return 'False,' + str(type(e).__name__)
