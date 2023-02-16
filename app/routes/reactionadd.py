from flask import Blueprint
from app.lib import get_json
from app.models.user import User
from app.models.pin import Pin
from app.models.reaction import Reaction
from app.core import db
from datetime import datetime
import pytz
import sys



blueprint = Blueprint('reactonadd', __name__)

@blueprint.route('/reactionadd',methods=['POST'])
def reactionadd():
    # jsonリクエストから値取得
    data = get_json()
    
    content = data['content']
    user_uuid = data['user_uuid']
    pin_uuid = data['pin_uuid']
    
    user = User.query.filter_by(uuid=user_uuid).first()
    pin = Pin.query.filter_by(uuid=pin_uuid).first()
    
    
    #不正なユーザーの場合
    if(user==None):
        return 'False, NOT found user'
    
    
    #ルームに入っていないユーザーの場合
    if(user.room==None and user.room_member==None):
        return 'False, Caution  enter some room'
    
    #pinが存在しないとき
    if(pin==None):
        return 'False, NOT found pin'
    
  
    content_list = ['ok','no','unable','stop']  
    if(content not in content_list):
        return 'False, NOT found DEFAULT reaction'
    
    
    # pinにreactionする時 
    else:
        room = pin.room
        
        owner_reacton = Reaction(
                user_id = user.id,
                pin_id = pin.id,
                created_at = datetime.now(pytz.timezone('Asia/Tokyo')),
                content = content,
                to_user_id = room.user.id   
            )
        
        reactions = []
        
        for receiver in room.room_members:
        
            reaction = Reaction(
                user_id = user.id,
                pin_id = pin.id,
                created_at = datetime.now(pytz.timezone('Asia/Tokyo')),
                content = content,
                to_user_id = receiver.user_id 
            )
            reactions.append(reaction)
        
        #pinに初めてreactionするとき  または　reactionの再生成  
        # エラーが出たらロールバック
        try:
            # dbにreactionを登録
            db.session.add(owner_reacton)
            db.session.add_all(reactions)
            db.session.commit()
            return 'True' 
        
        except Exception as e:
            db.session.rollback()
            return 'False,' + str(type(e).__name__)

   
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    


