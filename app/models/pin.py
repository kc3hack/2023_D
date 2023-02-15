from app.core import db
from datetime import datetime

import pytz


class Pin(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    altitude = db.Column(db.Float, nullable=False)
    longuitude = db.Column(db.Float, nullable=False)
    latitude = db.Column(db.Float, nullable=False)
    type = db.Column(db.String, nullable=False)
    uuid = db.Column(db.String, nullable=False, unique=True)
    created_at = db.Column(db.DateTime, nullable=False, default=datetime.now(pytz.timezone('Asia/Tokyo')))

    user_id = db.Column(db.Integer, db.ForeignKey("user.id"), nullable=False, unique=True)
    user = db.relationship("User", back_populates="pin")
    reactions = db.relationship("Reaction",uselist=True,back_populates="pin",cascade="all, delete, delete-orphan")
