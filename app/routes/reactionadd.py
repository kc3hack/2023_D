from flask import Blueprint
from app.lib import get_json
from app.models.user import User
from app.models.pin import Pin
from app.models.reaction import Reaction
from app.core import db
from datetime import datetime
from sqlalchemy import and_

import pytz
import sys

blueprint = Blueprint('reactonadd', __name__)


@blueprint.route('/reactionadd', methods=['POST'])
def reactionadd():
    # jsonリクエストから値取得
    data = get_json()

    reaction = data['reaction']
    user_uuid = data['user_uuid']
    pin_uuid = data['pin_uuid']

    user = User.query.filter_by(uuid=user_uuid).first()
    pin = Pin.query.filter_by(uuid=pin_uuid).first()

    # 不正なユーザーの場合
    if (user == None):
        return 'False, NOT found user'


    #ルームに入っていないユーザーの場合
    if(user.room==None and user.room_member==None):
        return 'False, Caution  enter some room'

    #pinが存在しないとき
    if(pin==None):
        return 'False, NOT found pin'

    reaction_list = ['ok', 'no', 'unable', 'stop']
    if (reaction not in reaction_list):
        return 'False, NOT found DEFAULT reaction'

    room = pin.room
    # 既にリアクションが作られていた場合は上書きするため、古いリアクションは削除する
    old_reactions = Reaction.query.filter(
        and_(Reaction.user_id == user.id, Reaction.pin_id == pin.id)).all()
    if old_reactions:
        try:
            for old_reaction in old_reactions:
                db.session.delete(old_reaction)
        except Exception as e:
            db.session.rollback()
            return 'False,' + str(type(e).__name__)

    owner_reacton = Reaction(
        user_id=user.id,
        pin_id=pin.id,
        created_at=datetime.now(pytz.timezone('Asia/Tokyo')),
        content=reaction,
        to_user_id=room.user.id
    )

    reactions = []

    for receiver in room.room_members:
        reaction_i = Reaction(
            user_id=user.id,
            pin_id=pin.id,
            created_at=datetime.now(pytz.timezone('Asia/Tokyo')),
            content=reaction,
            to_user_id=receiver.user_id
        )
        reactions.append(reaction_i)

    # pinに初めてreactionするとき またはreactionの再生成
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
