import MySQLdb

DB_HOST = "hostname"
DB_USER = "username"
DB_PASS = "passwd"
DB_NAME = "db"

datos = [DB_HOST, DB_USER, DB_PASS, DB_NAME]
conn = MySQLdb.connect(*datos)
cursor = conn.cursor()
