from app.core import db
from flask_login import UserMixin
from datetime import datetime

import pytz
class User(UserMixin, db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String, nullable=False, unique=True)
    password = db.Column(db.String, nullable=False)
    # フロント側でユーザを識別する
    uuid = db.Column(db.String, nullable=False, unique=True)
    # ユーザが登録された時の時間
    created_at = db.Column(db.DateTime, nullable=False, default=datetime.now(pytz.timezone('Asia/Tokyo')))
    room = db.relationship("Room", uselist=False, back_populates="user", cascade="all, delete, delete-orphan")
    room_member = db.relationship("RoomMember", uselist=False, back_populates="user", cascade="all, delete, delete-orphan")
    pin = db.relationship("Pin", uselist=False, back_populates="user", cascade="all, delete, delete-orphan")
    reactions = db.relationship("Reaction",uselist=True,back_populates="user",cascade="all, delete, delete-orphan")


