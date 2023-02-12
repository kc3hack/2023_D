from flask import Flask, render_template, request, redirect
from flask_sqlalchemy import SQLAlchemy
import pytz
from datetime import datetime
import uuid
from main import db,app,User

class Room(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    room_number = db.Column(db.Integer, nullale=False, unique=True)
    created_at = db.Column(db.DateTime, nullable=False, default=datetime.now(pytz.timezone('Asia/Tokyo')))
    user_id = db.Column(db.Integer, db.ForeignKey("user.id"))
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

    





