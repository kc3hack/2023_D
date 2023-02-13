from flask import Flask
from flask_sqlalchemy import SQLAlchemy

app = Flask(__name__)

app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///development.db'
app.config['SQLALCHEMY_ECHO'] = True

# sessionを使う際にSECRET_KEYを設定
app.config['SECRET_KEY'] = 'secret_key'  # TODO 後で変える
db = SQLAlchemy(app)
