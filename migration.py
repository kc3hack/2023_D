from app.core import app, db
from app.models.room_member import RoomMember
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

    user3 = User(
        name = 'morimoto',
        password = 'forestbook',
        uuid = 'kamenrider'
    )

    user4 = User(
        name = 'xiao',
        password = 'shou0417',
        uuid = 'wind'
    )

    user5 = User(
        name = 'itoho',
        password = 'kindai',
        uuid = 'hardware'
    )
    
    db.session.add(user1)
    db.session.add(user2)
    db.session.add(user3)
    db.session.add(user4)
    db.session.add(user5)

    
    room1 = Room(
        room_number = '1',
        user_id = '1'
    )

    room2 = Room(
        room_number = '2',
        user_id = '4'
    )
    
    db.session.add(room1)
    db.session.add(room2)

    room_member1 = RoomMember(
        room_id = '1',
        user_id = '2'
    )

    room_member2 = RoomMember(
        room_id = '1',
        user_id = '3'
    )
    room_member3 = RoomMember(
        room_id = '1',
        user_id = '4'
    )
    
    db.session.add(room_member1)
    db.session.add(room_member2)
    db.session.add(room_member3)

    
    pin1 = Pin(
        uuid= 'commit33',
        altitude = '21.0',
        longuitude ='35.0012',
        latitude ='135.123',  
        type = 'enemy',
        user_id = '1',
        room_id = '1'
    )
    pin2 = Pin(
        uuid= 'commit44',
        altitude = '42.0',
        longuitude ='70.0024',
        latitude ='270.246',  
        type = 'go',
        user_id = '2',
        room_id = '1'
    )
    pin3 = Pin(
        uuid= 'commit55',
        altitude = '84.0',
        longuitude ='140.0048',
        latitude ='540.492',  
        type = 'go',
        user_id = '3',
        room_id = '1'
    )

    pin4 = Pin(
        uuid= 'commit66',
        altitude = '168.0',
        longuitude ='280.0096',
        latitude ='1080.984',  
        type = 'defend',
        user_id = '4',
        room_id = '2'
    )
    
    db.session.add(pin1)
    db.session.add(pin2)
    db.session.add(pin3)
    db.session.add(pin4)
   
    db.session.commit()
    