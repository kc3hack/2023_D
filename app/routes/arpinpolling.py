from flask import Blueprint
from app.lib import get_json
from app.models.room import Room
from app.models.user import User
from app.models.pin import Pin


blueprint = Blueprint('arpinpolling', __name__)

@blueprint.route('/arpinpolling', methods=['POST'])
def ar_pin_polling():
    data = get_json()
    user_uuid = data['user_uuid']
    pin_uuid = data['pin_uuid']

    user = User.query.filter_by(uuid=user_uuid).first()
    pin = Pin.query.filter_by(uuid=pin_uuid).first()

    # 存在しないuser
    if (user is None):
        return 'False,NOT found user'

    # roomに入っていないuser
    if(user.room==None and user.room_member==None):
        return 'False,Caution!!! enter some room!!'

    if (pin is None):
        return 'False,NOT found pin'
   
    room = pin.room
    pin_list = []
    pins = room.pins
    for pin in pins:
        pin_list.extend([pin.type, pin.uuid, pin.user.name, str(pin.latitude), str(pin.longuitude), str(pin.altitude)])
    return f'True,{len(pins)},' + ','.join(pin_list)
