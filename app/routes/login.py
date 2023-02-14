from flask import Blueprint
from app.lib import get_json
from app.models.user import User

blueprint = Blueprint('login', __name__)


@blueprint.route('/login', methods=['POST'])
def login():
    data = get_json()
    username = data['name']
    userpassword = data['password']

    user = User.query.filter_by(name=username).first()
    if user is None:
        return 'False,NOT found user'

    if user.password == userpassword:
        return 'True,' + user.uuid
    else:
        return 'False, INCORRECT password'
