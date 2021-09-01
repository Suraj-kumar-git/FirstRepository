#include<iostream>
using namespace std;
int main()
{
  int a,i,n;
  cout<<"Program to print multiplication table."<<endl;
  cout<<"Which multiplication table you want?"<<endl;
  cin>>a;
  cout<<"Please enter how many terms you want."<<endl;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    cout<<a<<" x "<<i<<" = "<<a*i<<endl;
  }
  return 0;
}