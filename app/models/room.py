from app.core import db
from datetime import datetime

import pytz

class Room(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    room_number = db.Column(db.Integer, nullable=False, unique=True)
    created_at = db.Column(db.DateTime, nullable=False, default=datetime.now(pytz.timezone('Asia/Tokyo')))
    user_id = db.Column(db.Integer, db.ForeignKey("user.id"), nullable=False, unique=True)
    user = db.relationship("User", back_populates="room")
    room_members = db.relationship("RoomMember", uselist=True, back_populates="room", cascade="all, delete, delete-orphan")
    pins = db.relationship("Pin", uselist=True, back_populates="room", cascade="all, delete, delete-orphan")