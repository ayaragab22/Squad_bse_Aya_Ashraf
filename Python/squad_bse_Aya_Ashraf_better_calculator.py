num1 = float(input("Enter your first number:"))
num2 = float(input("Enter your second number:"))
op = input("Enter the operator:")
if op == '+':
    print(num1 + num2)
elif op == '-':
    print(num1 - num2)
elif op == '*':
    print(num1 * num2) 
elif op == '/':
    print(num1 / num2)     
else:
    print("Invalid opertor!")      