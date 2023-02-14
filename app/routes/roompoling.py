from flask import Blueprint
from app.lib import get_json
from app.models.user import User

blueprint = Blueprint('roompolling', __name__)


@blueprint.route('/roompolling', methods=['POST'])
def room_polling():
    data = get_json()
    user_uuid = data['user_uuid']
    user = User.query.filter_by(uuid=user_uuid).first()

    if (user is None):
        return 'False,NOT found user'

    room = get_room_by_user(user)
    if (room is None):
        return 'False,Not found room'

    owner = room.user
    member_list = []
    members = room.room_members
    for member in members:
        member_list.append(member.user.name)
    return f'True,{room.room_number},{len(member_list) + 1},{owner.name},' + ','.join(member_list)


def get_room_by_user(user):
    if (user.room != None):
        return user.room
    if (user.room_member != None):
        return user.room_member.room
    else:
        return None
