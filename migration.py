from app.core import app, db

with app.app_context():
    db.drop_all()

with app.app_context():
    db.create_all()