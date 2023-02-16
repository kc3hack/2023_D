from flask import Blueprint
from app.lib import get_json
from app.models.user import User
from app.models.pin import Pin
from app.core import db

blueprint = Blueprint('pincancel',__name__)


@blueprint.route('/pincancel',methods=['POST'])
def pincancel():
    # jsonリクエストから値取得
    data = get_json()
    
    user_uuid = data['user_uuid']
    pin_uuid = data['pin_uuid']
    
    user = User.query.filter_by(uuid=user_uuid).first()
    pin = Pin.query.filter_by(uuid=pin_uuid).first()
    
    
    
    #不正なユーザーの場合
    if(user==None):
        return 'False, NOT found user'
    
    #ルームに入っていないユーザーの場合
    if(user.room==None and user.room_member==None):
        return 'False, Caution!! enter some room!!'
    
    #pinが存在しない場合
    if(pin==None):
        return 'False, NOT found pin'
    
    #pinを刺したユーザーではない場合
    if(user.pin==None):
        return 'False, you did NOT create this pin'
    
    #pinを刺したユーザー本人の場合
    else:
         # エラーが出たらロールバック
        try:
            # dbからpinを削除
            db.session.delete(pin)
            db.session.commit()
            return 'True'
        except Exception as e:
            db.session.rollback()
            return 'False,' + str(type(e).__name__)
    
    
    



