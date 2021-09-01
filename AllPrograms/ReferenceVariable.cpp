#include<iostream>
using namespace std;
int main()
{
  int a= 23;
  cout<<"a = "<<a<<endl;
  int &b = a;
  cout<<"b = "<<b<<endl;
  b = b+1;
  cout<<"b = "<<b<<endl;
  cout<<"a = "<<a<<endl;
  return 0; 
}