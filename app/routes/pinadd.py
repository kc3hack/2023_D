from flask import Blueprint
from app.lib import get_json
from app.models.pin import Pin
from app.models.user import User
from datetime import datetime
from app.core import db

import pytz
import uuid

blueprint = Blueprint('pinadd', __name__)


@blueprint.route('/pinadd', methods=['POST'])
def pinadd():
    data = get_json()
    user_uuid = data['user_uuid']
    longuitude = data['longuitude']
    latitude = data['latitude']
    altitude = data['altitude']
    pin_type = data['pin_type']

    # uuidを生成
    pin_uuid = str(uuid.uuid4())

    user = User.query.filter_by(uuid=user_uuid).first()
    if (user == None):
        return 'False, NOT found user'

    typelist = ['go','enemy','item','attack','go2','defend','watch','trace']  
    if (pin_type not in typelist):
        return 'False, NOT found pin'

    pin = Pin(
        altitude=altitude,
        longuitude=longuitude,
        latitude=latitude,
        type=pin_type,
        uuid=pin_uuid,
        created_at=datetime.now(pytz.timezone('Asia/Tokyo')),
        user_id=user.id,
        roon_id=user.room.id
    )

    if (user.pin != None):
        try:
            db.session.delete(user.pin)
            db.session.commit()
        except Exception as e:
            db.session.rollback()
            return 'False,' + str(type(e).__name__)

    # エラーが出たらロールバック
    try:
        # dbにpinを登録
        db.session.add(pin)
        db.session.commit()
        return 'True,' + pin_uuid
    except Exception as e:
        db.session.rollback()
        return 'False,' + str(type(e).__name__)
