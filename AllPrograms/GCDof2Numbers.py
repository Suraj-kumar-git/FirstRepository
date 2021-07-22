print("Program to find GCD of two numbers.")
num1=int(input("Enter first number:"))
num2=int(input("Enter second number:"))
if num1>num2:
  min = num2
else:
  min=num1
for num in range(1,min+1):
  if num1 % num == 0 and num2 % num == 0:
    HCF = num
print("HCF/GCD of these two numbers is ",HCF)