from app.core import app
from app.routes.register import blueprint as register_blueprint
from app.routes.login import blueprint as login_blueprint
from app.routes.roomcreate import blueprint as roomcreate_blueprint
from app.routes.roomexist import blueprint as roomexist_blueprint
from app.routes.roomdelete import blueprint as roomdelete_blueprint
from app.routes.pinadd import blueprint as pinadd_blueprint
from app.routes.roompoling import blueprint as roompoling_blueprint
from app.routes.roomleave import blueprint as roomleave_blueprint
from app.routes.reactionadd import blueprint as reactionadd_blueprint
from app.routes.pincancel import blueprint as pincancel_blueprint
from app.routes.arpinpolling import blueprint as arpinpolling_blueprint
from app.routes.arreactionpolling import blueprint as arreactionpolling_blueprint

app.register_blueprint(register_blueprint)
app.register_blueprint(login_blueprint)
app.register_blueprint(roomcreate_blueprint)
app.register_blueprint(roomexist_blueprint)
app.register_blueprint(roomdelete_blueprint)
app.register_blueprint(pinadd_blueprint)
app.register_blueprint(roompoling_blueprint)
app.register_blueprint(roomleave_blueprint)
app.register_blueprint(reactionadd_blueprint)
app.register_blueprint(pincancel_blueprint)
app.register_blueprint(arpinpolling_blueprint)
app.register_blueprint(arreactionpolling_blueprint)
