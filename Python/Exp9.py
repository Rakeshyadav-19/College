#Create Pandas series and DataFrame from various inputs

#1
from ast import Name
from os import name
from numpy import dtype
import pandas as pd
s = pd.Series([1,2,3,4,5,6])
print(s)

#2
print('\n')
s=pd.Series([10,20,30,40,50,60], name="Numbers")
print(s) 

#3
print('\n')
s1=([10,20,30,40])
s2 = (["Apple","Orange","Grape","Watermelon"])
df = pd.DataFrame({'Number': s1, 'Fruits':s2})
print(df)

#4
print('\n')
df = pd.DataFrame({"Number": [10,20,30,40,50],"Fruits": ["Watermelon","Apple","Orange","Grape","Mango"]})
new_col = pd.Series([5, 4, 3, 2, 1], name="Rank")
df = pd.concat([df,new_col],axis=1)
print(df)
