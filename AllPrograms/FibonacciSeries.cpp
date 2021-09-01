#include<iostream>
using namespace std;
int main()
{
  int t1,i,t2,n,sum;
  cout<<"Program to get fibonacci series."<<endl;
  cout<<"How many terms you want?"<<endl;
  cin>>n;
  for(t1=-1,t2=1, i=1;i<=n;i++)
  {
    sum= t1+t2;
    cout<<sum<<" ";
    t1=t2;
    t2=sum;
  }
  return 0;
}