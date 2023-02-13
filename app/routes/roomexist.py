from flask import Blueprint
from app.lib import get_json
from app.models.user import User
from app.models.room import Room

blueprint = Blueprint('roomexist', __name__)


@blueprint.route('/roomexist', methods=['POST'])
def roomexist():
    # jsonリクエストから値取得
    data = get_json()

    room_number = data['room_number']
    user_uuid = data['user_uuid']

    user = User.query.filter_by(uuid=user_uuid).first()
    room = Room.query.filter_by(room_number=room_number).first()

    if (room == None):
        return 'False,そのroomは存在しません'

    elif (user == None):
        return 'False,不正なユーザーです'

    else:
        return 'True,そのroomは存在しています'
