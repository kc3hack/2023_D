from flask import Blueprint
from app.lib import get_json
from app.models.user import User
from app.models.pin import Pin



blueprint = Blueprint('arreactionpolling', __name__)

@blueprint.route('/arreactionpolling',methods=['POST'])
def arreactionpolling():
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
        return 'Caution!! enter some room!!'
    
    #pinが存在しない場合
    if(pin==None):
        return 'False, NOT found pin'
    
    else:
        
        reaction_with_creater_list = []
        
        reactions = pin.reactions
        
        for reaction in reactions:
            reaction_with_creater_list.append(reaction.user.name)
            reaction_with_creater_list.append(reaction.content)
            
            
        return f'True,{len(reactions)},' + ','.join(reaction_with_creater_list)

