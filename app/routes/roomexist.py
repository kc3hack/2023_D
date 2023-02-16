from flask import Blueprint
from app.lib import get_json
from app.models.user import User
from app.models.room import Room
from app.models.room_member import RoomMember
from datetime import datetime
import pytz
from app.core import db

blueprint = Blueprint('roomexist', __name__)



@blueprint.route('/roomexist',methods=['POST'])
def roomexist():
     # jsonリクエストから値取得
    data = get_json()
    
    room_number = data['room_number'] 
    user_uuid = data['user_uuid']
    
    
    user = User.query.filter_by(uuid=user_uuid).first()
    room = Room.query.filter_by(room_number=room_number).first()
    
    
    if(user==None):
        return 'False, unknown user'
    
    elif(room==None):
        return 'False, NOT found room'
            
    elif(room.user_id == user.id):
        return 'False, Caution YOU ARE OWNER'
    
    else:
        room_member=RoomMember(
            user_id=user.id,
            room_id=room.id,
            created_at=datetime.now(pytz.timezone('Asia/Tokyo'))
            )
        
         # エラーが出たらロールバック
        try:
            # dbにroom_memberを登録
            db.session.add(room_member)
            db.session.commit()
            return 'True, enter the room'
        except Exception as e:
            db.session.rollback()
            return 'False,' + str(type(e).__name__)
