#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
  auto var1 = 23;
  auto var2 = 32.43;
  auto var3 = 'S';
  cout<<"Data type of var1 is: "<<typeid(var1).name()<<endl;
  cout<<"Data type of var2 is: "<<typeid(var2).name()<<endl;
  cout<<"Data type of var3 is: "<<typeid(var3).name()<<endl;
  return 0;

}