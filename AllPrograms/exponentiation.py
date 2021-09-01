#Finding exponent of a number using operator and math library.
base=int(input("Enter base number:"))
exp=int(input("Enter power on the base:"))
result1=base**exp
print(base,"to the power",exp,"is",result1)
print("Now we are using math library.")
import math as ex
result2=ex.pow(base,exp)
print(base,"to the power",exp,"is",result1)