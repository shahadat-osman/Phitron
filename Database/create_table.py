import mysql.connector

db_name = "python_test_db"

mydbconnection = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "",
    database = db_name
)

print(mydbconnection)

mycursor = mydbconnection.cursor()
sqlquery     ="""
                CREATE TABLE STUDENT(
                    ROLL INT PRIMARY KEY,
                    NAME VARCHAR(20)
                )
"""

mycursor.execute(sqlquery)
print("create table successful")