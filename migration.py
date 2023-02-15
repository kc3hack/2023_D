from app.core import app, db
from app.models.user import User
from app.models.room import Room
from app.models.pin import Pin

with app.app_context():
    db.drop_all()

with app.app_context():
    db.create_all()
    
with app.app_context():
    user1 = User(
        name = 'kido',
        password = 'ryuuki1111',
        uuid = '551nikuman'
    )
    
    user2 = User(
        name = 'asakura',
        password = 'oujya5555',
        uuid = 'linebot12'
    )
    
    db.session.add(user1)
    db.session.add(user2)
    
    room = Room(
        room_number = '1',
        user_id = '1'
    )
    
    db.session.add(room)
    
    pin = Pin(
        uuid= 'commit33',
        altitude = '21.0',
        longuitude ='35.0012',
        latitude ='135.123',  
        type = 'enemy',
        user_id = '1'
    )
    
    db.session.add(pin)
    
    db.session.commit()
    