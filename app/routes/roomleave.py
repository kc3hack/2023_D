from flask import Blueprint
from app.lib import get_json
from app.core import db
from app.models.user import User

blueprint = Blueprint('roomleave', __name__)


@blueprint.route('/roomleave', methods=['POST'])
def roomleave():
    # jsonリクエストから値取得
    data = get_json()

    user_uuid = data['user_uuid']

    user = User.query.filter_by(uuid=user_uuid).first()

    # 不正なユーザーのとき
    if (user == None):
        return 'False, NOT found user'

    # オーナーであるとき
    if (user.room != None):
        return 'False, delete room for leaving this room'

    # オーナーではない(RoomMenberであるとき)
    room_members = user.room_member
    if (room_members != None):
        # エラーが出たらロールバック
        try:
            # dbからroomを削除
            db.session.delete(room_members)
            db.session.commit()
            return 'True'
        except Exception as e:
            db.session.rollback()
            return 'False,' + str(type(e).__name__)

    # ユーザー登録はされているがオーナーでもメンバーでもないとき
    else:
        return 'False, Caution! unexpected commit'
