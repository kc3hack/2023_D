from flask import Blueprint
from app.lib import get_json
from datetime import datetime
from app.models.user import User
from app.core import db

import uuid
import pytz

blueprint = Blueprint('register', __name__)


@blueprint.route('/register', methods=['POST'])
def register():
    # jsonリクエストから値取得
    data = get_json()
    username = data['name']
    userpassword = data['password']
    # uuidを生成
    useruuid = str(uuid.uuid4())
    usercreated_at = datetime.now(pytz.timezone('Asia/Tokyo'))

    user = User(
        name=username,
        password=userpassword,
        uuid=useruuid,
        created_at=usercreated_at
    )

    # エラーが出たらロールバック
    try:
        # dbにuserを登録
        db.session.add(user)
        db.session.commit()
        return 'True,' + useruuid
    except Exception as e:
        db.session.rollback()
        return 'False,' + str(type(e).__name__)
