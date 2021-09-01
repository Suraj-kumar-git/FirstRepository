#include<iostream>
using namespace std;
int gcd(int , int);
int main()
{
  int first,lcm,sec;
  cout<<"Program to calculate LCM of two numbers."<<endl;
  cout<<"Enter first number:";
  cin>>first;
  cout<<"Enter second number:";
  cin>>sec;
  lcm=(first*sec)/gcd(first,sec);
  cout<<"LCM of "<<first<<" & "<<sec<<" is:"<<lcm<<endl;
  return 0;
}
int gcd(int a, int b)
{
  int min,r,max;
  if(a>b)
  {
    max = a;
    min = b;
  }
  else
  {
    min= a;
    max = b;
  }
  do
  {
    r = max%min;
    if(r!=0)
    {
    max = min;
    min = r;
    }
  }while(r!=0);
  return min;
}