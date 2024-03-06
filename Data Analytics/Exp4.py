import pandas as pd

# To create a data set:
dataSet = {
    "Roll No.":[1,2,3,4,5,6,7,8,9],
    "Name":["rakesh","rax","prabhu", "anuj", "akash", "Kartik", "shri", "krishna","Prem"]
}
# To create covert the data to data frame
df = pd.DataFrame(dataSet)
print(df)

print("\n")
# to read a local file data set
r = pd.read_csv("/home/rax/Documents/GIT/Sems/All Sems/Data Analytics/file.csv")
print(r)

# Gives all the information of the data file
print(df.info())

# To print first rows, we can also give how much row we want to pass
print(df.head()) #By default it shows first 5

# To print last rows, we can also give how much rows from below we
print(df.tail()) 

# To convert dataset to string
print(df.to_string())

# To check version
print(pd.__version__)

# Create a series
a = [1,4,8,0]
var = pd.Series(a)
print(var)
print(var[0])

# To define our own index
updateVar = pd.Series(a,index = ["w","x","y","z"])
print(updateVar[0])

# To display max rows
print(pd.options.display.max_rows)

# To set max rows of our own choice
pd.options.display.max_rows = 9999
df = pd.read_csv("/home/rax/Documents/GIT/Sems/All Sems/Data Analytics/file.csv")
print(pd.options.display.max_rows)
print(df)