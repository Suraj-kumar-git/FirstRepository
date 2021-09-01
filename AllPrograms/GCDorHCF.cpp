#include<iostream>
using namespace std;
int main()
{
  int min,max,r,first,second;
  cout<<"Program to find HCF of two numbers."<<endl;
  cout<<"Enter first number:";
  cin>>first;
  cout<<"Enter second number:";
  cin>>second;
  if(first<second)
  {
    min=first;
    max=second;
  }
  else{min=second;
  max=first;}
  do
  {
    r=max%min;
    if(r!=0)
    {
      max=min;
      min=r;
    }
  }
  while(r != 0);
  cout<<"HCF of "<<first<<" & "<<second<<" is "<<min<<endl;
  return 0;
}