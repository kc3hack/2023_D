from flask import Blueprint
from app.lib import get_json
from app.models.user import User
from app.models.pin import Pin
from app.models.reaction import Reaction
from app.core import db

blueprint = Blueprint('arreactionpolling', __name__)


@blueprint.route('/arreactionpolling', methods=['POST'])
def arreactionpolling():
    # jsonリクエストから値取得
    data = get_json()

    user_uuid = data['user_uuid']
    pin_uuid = data['pin_uuid']

    user = User.query.filter_by(uuid=user_uuid).first()
    pin = Pin.query.filter_by(uuid=pin_uuid).first()

    # 不正なユーザーの場合
    if (user == None):
        return 'False, NOT found user'
    
    #ルームに入っていないユーザーの場合
    if(user.room==None and user.room_member==None):
        return 'False, Caution!! enter some room!!'
    
    #pinが存在しない場合
    if(pin==None):
        return 'False, NOT found pin'

    else:

        reaction_with_creater_list = []

        used_reactions = Reaction.query.filter(Reaction.to_user_id == user.id).all()

        for reaction in used_reactions:
            reaction_with_creater_list.append(reaction.user.name)
            reaction_with_creater_list.append(reaction.content)
            reaction_with_creater_list.append(reaction.pin.uuid)

        count = len(used_reactions)
        try:
            # used_reactions = Reaction.query.filter(Reaction.to_user_id==user.id)
            # dbからreactionを削除

            for used_reaction in used_reactions:
                db.session.delete(used_reaction)

            db.session.commit()


        except Exception as e:
            db.session.rollback()
            return 'False,' + str(type(e).__name__)

        return f'True,{int(count)},' + ','.join(reaction_with_creater_list)
