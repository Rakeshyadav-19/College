from numpy import divide

def divide_numpy(x,y):
    try:
        result = x/y
    except ZeroDivisionError:
        print("Error:Division by zero is not allowed")
    except TypeError:
        print("Error: Please provide valid numeric value")
    else:
        print(f"The result of {x}/{y} is {result}")
    finally:
        print("This block is always executes regardless of weather an excpton occured or not")

try:
    num1 = float(input("Enter numerator: "))
    num2= float(input("Enter denomenator: "))
    divide_numpy(num1,num2)
except ValueError as e:
    print("Please enter valid numeric value")
    print(f"An exception error occured {e}")