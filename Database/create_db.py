import mysql.connector

db_name = "python_test_db"

mydbconnection = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "La190337",
    database = db_name
)

mycursor = mydbconnection.cursor()

sqlquery = """
            update student
            set Roll = 13
            where name = 'MSO'
            """

mycursor.execute(sqlquery)
mydbconnection.commit()
print("Update Table Successfull")