#include<iostream>
using namespace std;
int main()
{
  cout<<"Program to see use of break keyword."<<endl;
  //Printing numbers until they are dividing a particular number.
  for(int i=1;i<=100;i++)
  {
    if(i%25!=0)
    {
      cout<<i<<" ";
    }
    else
    {
      break;
    }
  }
  return 0;
}