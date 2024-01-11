#Create a user defined function with differnet tyes of function arguments.

#Passing value statically
def add(a,b):
    sum = a+b
    print("Sum of 2+3 = ",sum)
    print("\n")
add(2,3)

#Passing value dynamically
def sum(i,j):
    addition = i+j
    print("Addition is = ",addition)
    print("\n")

i = int(input("Enter value of i ="))
j = int(input("Enter value of j ="))
sum(i,j)

#different operations using differnet functions
def Addition(a,b):
    add = a+b 
    print("Addition is = ",add)

def Substraction(a,b):
    sub = a-b 
    print("Substraction is = ",sub)

def Multiplication(a,b):
    mul = a*b 
    print("Multiplication is = ",mul)

def Division(a,b):
    div = a/b 
    print("Division is = ",div)

def Modulus(a,b):
    mod = a%b 
    print("Modulus is = ",mod)

a = int(input("Enter value of A ="))
b = int(input("Enter value of b ="))

Addition(a,b)
Substraction(a,b)
Multiplication(a,b)
Division(a,b)
Modulus(a,b)