#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"Program to check leap year."<<endl;
  cout<<"Enter a number to check leap year...:"<<endl;
  cin>> a;
  if(a % 4 == 0)
  {
    if( a % 100== 0)
    {
      if(a % 400 == 0)
      {
        cout<<a<<" is a leap year."<<endl;
      }
      else
      {
        cout<< a <<" is not a leap year."<<endl;
      }
    }
    else
    {
      cout<<a<<" is a leap year."<<endl;
    }
  }
  else
  {
    cout<< a <<" is not a leap year."<<endl;
  }
  return 0;
}