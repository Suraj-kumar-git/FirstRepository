#calculating Square root of number using Newton,s method.
#Square-root=0.5*(assumed-value+(actual-value/assumed-value))
def root(num,tol):
  assume=num
  print("assume-->",assume)
  count=0
  while True:
    count+=1
    print("Step ",count)
    s_root=0.5*(assume+(num/assume))
    print("s_root-->",s_root)
    z=abs(s_root-assume)
    print("z-->",z)
    if(z<tol):
      break
      #root update
    assume=s_root
    print("updated assume-->",assume)
  return s_root
#int(x)=input("Which number's square root you want to calculate?")
print(root(6.25,0.0000001))
"""
Calculating square root by using python's math library.
import math as m
print("sqrt=",m.sqrt(36))"""