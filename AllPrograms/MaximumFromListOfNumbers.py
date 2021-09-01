#Program to find maximum and minimum from a list of n elemnts.

a=[]
size=int(input("Enter size of list:"))
for i in range(size):
  val=int(input("Enter number:"))
  a.append(val)
max=a[0]
min=a[0]
for i in range(size):
  if(a[i]>max):
   max=a[i]
for i in range(size):
  if(a[i]<min):
   min=a[i]
print("Maximum number is:",max)
print("Minimum number is:",min)
"""
a=[]
size=int(input("Please enter size of list:"))
for i in range(size):
  val=int(input("Enter number:"))
  a.append(val)
maxval=max(a)
minval=min(a)
print("Maximum value is:",maxval)
print("Minimum value is:",minval)"""
