from app.core import app, db
from app.models.user import User
from app.models.room import Room
from app.models.pin import Pin
from app.routes.register import blueprint as register_blueprint
from app.routes.login import blueprint as login_blueprint
from app.routes.roomcreate import blueprint as roomcreate_blueprint
from app.routes.roomexist import blueprint as roomexist_blueprint
from app.routes.roomdelete import blueprint as roomdelete_blueprint
from app.routes.pinadd import blueprint as pinadd_blueprint

app.register_blueprint(register_blueprint)
app.register_blueprint(login_blueprint)
app.register_blueprint(roomcreate_blueprint)
app.register_blueprint(roomexist_blueprint)
app.register_blueprint(roomdelete_blueprint)
app.register_blueprint(pinadd_blueprint)
