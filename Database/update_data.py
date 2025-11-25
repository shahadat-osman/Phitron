import mysql.connector

db_name = "python_test_db"

mydbconnection = mysql.connector.connect(
    host="localhost", user="root", passwd="", database=db_name
)

print(mydbconnection)

mycursor = mydbconnection.cursor()
sqlquery = """
                update student
                set name = "Mr Shahadat"
                Where Roll = 1
"""

mycursor.execute(sqlquery)
mydbconnection.commit()
print("create table successful")
