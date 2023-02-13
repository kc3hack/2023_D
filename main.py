from flask import Flask, render_template, request, redirect
from flask_sqlalchemy import SQLAlchemy
from flask_login import LoginManager, UserMixin, login_user, login_required, logout_user, current_user
import pytz
from datetime import datetime
import uuid
import sys

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
    name = db.Column(db.String, nullable=False, unique=True)
    password = db.Column(db.String, nullable=False)
    # フロント側でユーザを識別する
    uuid = db.Column(db.String, nullable=False, unique=True)
    # ユーザが登録された時の時間
    created_at = db.Column(db.DateTime, nullable=False, default=datetime.now(pytz.timezone('Asia/Tokyo')))
    room = db.relationship("Room", uselist=False, back_populates="user",  cascade="all, delete, delete-orphan")
    pin = db.relationship("Pin", uselist=False, back_populates="user",  cascade="all, delete, delete-orphan")

def get_json():
    # jsonリクエストから値取得
    json = request.get_json()
    if type(json) == list:
        data = json[0]
    else:
        data = json
    return data

@app.route('/register', methods=['POST'])
def register():
    # jsonリクエストから値取得
    data = get_json()
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

@app.route('/login', methods=['POST'])
def login():
    data = get_json()
    username = data['name']
    userpassword = data['password']

    user = User.query.filter_by(name=username).first()
    if user is None:
        return 'False,userが見つかりません'

    if user.password == userpassword:
        return 'True,' + user.uuid
    else:
        return 'False,passwordが違います'


# 分割予定
class Room(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    room_number = db.Column(db.Integer, nullable=False, unique=True)
    created_at = db.Column(db.DateTime, nullable=False, default=datetime.now(pytz.timezone('Asia/Tokyo')))
    user_id = db.Column(db.Integer, db.ForeignKey("user.id"), nullable=False,unique=True)
    user = db.relationship("User", back_populates="room")

@app.route('/roomcreate', methods=['POST'])
def roomcreate():
    # jsonリクエストから値取得
    data = get_json()

    room_number = data['room_number']
    user_uuid = data['user_uuid']

    user = User.query.filter_by(uuid=user_uuid).first()
    if(user==None):
        return 'False,不正なユーザーです'
    else:
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



@app.route('/roomexist',methods=['POST'])
def roomexist():
     # jsonリクエストから値取得
    data = get_json()
    
    room_number = data['room_number'] 
    user_uuid = data['user_uuid']
    
    
    user = User.query.filter_by(uuid=user_uuid).first()
    room = Room.query.filter_by(room_number=room_number).first()
    
    if(room==None):
        return 'False,そのroomは存在しません'
    
    elif(user==None):
        return 'False,不正なユーザーです'
    
    else:
        return 'True,そのroomは存在しています'
    
    
    
@app.route('/roomdelete',methods=['POST'])
def roomdelete():
    # jsonリクエストから値取得
    data = get_json()
    
    room_number = data['room_number'] 
    user_uuid = data['user_uuid']
    
    
    user = User.query.filter_by(uuid=user_uuid).first()
    room = Room.query.filter_by(room_number=room_number).first()
    
    #オーナーか判断
    if(room.user_id==user.id):
        
        
         # エラーが出たらロールバック
        try:
            # dbからroomを削除
            db.session.delete(room)
            db.session.commit()
            return 'True'
        except Exception as e:
            db.session.rollback()
            return 'False,' + str(type(e).__name__)
    
    else:
        return 'False,オーナーではありません'

# 分割予定
class Pin(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    altitude = db.Column(db.Float, nullable=False)
    longuitude = db.Column(db.Float, nullable=False)
    latitude = db.Column(db.Float, nullable=False)
    type = db.Column(db.String, nullable=False)
    uuid = db.Column(db.String, nullable=False, unique=True)
    created_at = db.Column(db.DateTime, nullable=False, default=datetime.now(pytz.timezone('Asia/Tokyo')))

    user_id = db.Column(db.Integer, db.ForeignKey("user.id"), nullable=False,unique=True)
    user = db.relationship("User", back_populates="pin")

@app.route('/pinadd', methods=['POST'])
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
    if(user==None):
        return 'False,不正なユーザーです'

    typelist = ['go', 'enemy'] # TODO typeを追加
    if(pin_type not in typelist): 
        return 'False,不正なピンです'

    pin = Pin(
        altitude=altitude,
        longuitude=longuitude,
        latitude=latitude,
        type=pin_type,
        uuid=pin_uuid,
        created_at=datetime.now(pytz.timezone('Asia/Tokyo')),
        user_id=user.id,
        )
    
    if(user.pin != None):
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
        return 'True'
    except Exception as e:
        db.session.rollback()
        return 'False,' + str(type(e).__name__)
