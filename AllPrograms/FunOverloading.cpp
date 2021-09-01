#include <iostream>
using namespace std;
int sum(int , int);
double sum(double , double);
int main()
{
  int num1,num2;
  double num3,num4;
  cout<<"Program to see function overloadng."<<endl;
  cout<<"Enter two integer values:";
  cin>>num1>>num2;
  cout<<"Sum of "<<num1<<" & "<<num2<< " is "<<sum(num1, num2)<<endl;
  cout<<"Enter two double type values:"<<endl;
  cin>>num3>>num4;
  cout<<"Sum of "<<num3<<" & "<<num4<< " is "<<sum(num3, num4)<<endl;
  return 0;
}
int sum(int a, int b)
{
  return a+b;
}
double sum(double a , double b)
{
  return a+b;
}