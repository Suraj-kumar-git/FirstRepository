#include<iostream>
using namespace std;
int main()
{
  int sum=0,n;
  cout<<"Program to find sum of digits of a number."<<endl;
  cout<<"Enter any number:"<<endl;
  cin>>n;
  int k=n;
  while(n>0)
  {
    int r=n%10;
    sum+=r;
    n=n/10;
  }
  cout<<"Sum of digits of "<<k<<" is "<<sum<<endl;
  return 0;
}