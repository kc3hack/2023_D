from flask import Flask, render_template, request, redirect
from flask_sqlalchemy import SQLAlchemy
from flask_login import LoginManager, UserMixin, login_user, login_required, logout_user, current_user
import pytz
from datetime import datetime
import uuid
#import roomcreate

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///development.db'
app.config['SQLALCHEMY_ECHO'] = True

# sessionを使う際にSECRET_KEYを設定
app.config['SECRET_KEY'] = 'secret_key'  # TODO 後で変える

db = SQLAlchemy(app)

login_manager = LoginManager()
login_manager.init_app(app)


class User(UserMixin, db.Model):
   id = db.Column(db.Integer, primary_key=True)
   name = db.Column(db.String, nullable=False,unique=True)
   password = db.Column(db.String, nullable=False)
   # フロント側でユーザを識別する
   uuid = db.Column(db.String, nullable=False, unique=True)
   # ユーザが登録された時の時間
   created_at = db.Column(db.DateTime, nullable=False, default=datetime.now(pytz.timezone('Asia/Tokyo')))
   room = db.relationship("Room", uselist=False, back_populates="user",  cascade="all, delete, delete-orphan")


@app.route('/register', methods=['POST'])
def register():
    # jsonリクエストから値取得
    json = request.get_json()
    if type(json) == list:
        data = json[0]
    else:
        data = json
    username = data['name']
    userpassword = data['password']
    # uuidを生成
    useruuid = str(uuid.uuid4())
    usercreated_at = datetime.now(pytz.timezone('Asia/Tokyo'))

    user = User(
        name=username,
        password=userpassword,
        uuid=useruuid,
        created_at=usercreated_at
        )

    # エラーが出たらロールバック
    try:
        # dbにuserを登録
        db.session.add(user)
        db.session.commit()
        return 'True,' + useruuid
    except Exception as e:
        db.session.rollback()
        return 'False,' + str(type(e).__name__)

# 分割予定
class Room(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    room_number = db.Column(db.Integer, nullable=False, unique=True)
    created_at = db.Column(db.DateTime, nullable=False, default=datetime.now(pytz.timezone('Asia/Tokyo')))
    user_id = db.Column(db.Integer, db.ForeignKey("user.id"),nullable=False)
    user = db.relationship("User", back_populates="room")

@app.route('/roomcreate',methods=['POST'])
def roomcreate():
    # jsonリクエストから値取得
    json = request.get_json()
    if type(json) == list:
        data = json[0]
    else:
        data = json

    room_number = data['room_number']
    user_uuid = data['user_uuid']

    
    # カラムで絞り込み
    if (user_uuid==''):
        return 'False,' + '不正なユーザーです'
    else:
        user = User.query.filter_by(uuid=user_uuid).first()
       

    

        room = Room(
            room_number=room_number,
            created_at=datetime.now(pytz.timezone('Asia/Tokyo')),
            user_id=user.id
            )

        # エラーが出たらロールバック
        try:
            # dbにroomを登録
            db.session.add(room)
            db.session.commit()
            return 'True' 
        except Exception as e:
            db.session.rollback()
            return 'False,' + str(type(e).__name__)

        




