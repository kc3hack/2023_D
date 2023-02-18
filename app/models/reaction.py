from app.core import db
from datetime import datetime
import pytz


class Reaction(db.Model):
    id = db.Column(db.Integer,primary_key=True)
    user_id = db.Column(db.Integer,db.ForeignKey("user.id"),nullable=False)
    user = db.relationship("User",back_populates="reactions")
    pin_id = db.Column(db.Integer,db.ForeignKey("pin.id"),nullable=False)
    pin = db.relationship("Pin",back_populates="reactions")
    created_at = db.Column(db.DateTime, nullable=False, default=datetime.now(pytz.timezone('Asia/Tokyo')))
    content = db.Column(db.String)
    to_user_id = db.Column(db.Integer,nullable=False)
