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

    user_uuid = data['user_uuid']

    user = User.query.filter_by(uuid=user_uuid).first()

    if(user==None):
        return 'False, NOT found user'
    
    room=user.room
    
    if(room==None):
        return 'False, you are NOT owner'
    
    #オーナーである場合
    else:
        # エラーが出たらロールバック
        try:
            # dbからroomを削除
            db.session.delete(room)
            db.session.commit()
            return 'True'
        except Exception as e:
            db.session.rollback()
            return 'False,' + str(type(e).__name__)
        
        
