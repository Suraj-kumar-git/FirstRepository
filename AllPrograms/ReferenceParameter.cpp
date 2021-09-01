#include<iostream>
using namespace std;
//void fun(int & , int &);
void fun(int , int);
int main()
{
  int a= 5,b=8;
  cout<<"a = "<<a<<"   b = "<<b<<endl;
  fun(a,b);
  cout<<"Calling function.."<<endl;
  cout<<"a = "<<a<<"  b = "<<b<<endl;
  return 0;
}
//void fun(int &a, int &b)
void fun(int a, int b)
{
  a+= 10;
  b-= 5;
  cout<<"Inside fun function."<<endl;
  cout<<"a = "<<a<<"  b = "<<b<<endl;
}