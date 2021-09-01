#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrong(int);
int nDigits(int);
int main()
{
  int m,n,i;
  cout<<"Program to get Armstrong number between a range."<<endl;
  cout<<"Enter first number:"<<endl;
  cin>>m;
  cout<<"Enter second number:"<<endl;
  cin>>n;
  cout<<"Armstrong numbers between "<<m<<" & "<<n<< " are:";
  for(i=m;i<=n;i++)
  {
    if(isArmstrong(i))
    {
      cout<<i<<" ";
    }
  }
  return 0;
}
int nDigits(int i)
{
  int count=0;
  while(i>0)
  {
    i=i/10;
    count++;
  }
  return count;
}
bool isArmstrong(int i)
{
  int count = nDigits(i);
  int sum=0;
  int storei = i;
  while(i>0)
  {
    int r = i%10;
    i=i/10;
    sum+=pow(r,count);
  }
  return sum==storei;
}