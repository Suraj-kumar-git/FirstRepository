#num1=int(input("Enter a number:"))
#num2=int(input("Enter 2nd number:"))
#print( "Max is", num1) if num1>num2 else print("Max is ",num2)
#num=int(input("Enter a number:"))
#print(num, "is -ve") if num<0 else print(num, "is +ve") if num>0 else print(num, "=0")
#avg=float(input("Enter the average"))
#print()
#for row in range(1,6):
  #for col in range(1, row+1):
   # print(row,end=" ")
  #print()

#for row in range(5,0,-1):
 # for col in range(1,row+1):
  #  print(row,end=" ")
  #print()
#k=1
#for row in range(5,0,-1):
 # for col in range(1,k+1):
  #  print(row,end=" ")
  #print()
  #k=k+1

#for row in range(65,70):
 # for col in range(1,6):
  #  print(chr(row),end=" ")
  #print()

#num=1
#c=0
#while True:
 # if num%2==0:
  #  print(num)
   # c=c+1
    #if c==10:
      #break
  #num+=1

"""n=int(input("Enter how many prime numbers you want:"))
num=1
cprime=0
while True:
  c=0
  i=1
  while i<=num:
    if num%i==0:
      c=c+1
    i+=1
  if c==2:
    print(num)
    cprime+=1
  if cprime==n:
    break
num+=1"""

"""x, y, z = input("Enter three value: ").split()
if (x >= y) and (x >= z):
        max = x
  
elif (y >= x) and (y >= z):
        max = y
else:
        max = z
print(max)
  """
str1=input("Enter any character:")
if str1= "a" or "e" or "i" or "o" or "u":
  print("You entered a vowel")
else
 print("You entered a consonant")