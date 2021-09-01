#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  a = 23;
  cout<<"a = "<< a <<endl;
  b = ++a;
  int &p = a;
  //Here p is assigned 24;
  cout<<"p = "<< p <<endl; 
  cout<<"b = "<< b <<endl;
  cout<<"a = "<< a <<endl;
  c = a++;
  int &q = a;
  cout<<"q = "<< q <<endl;
  cout<<"p = "<< p <<endl;
  //But why p's value gets updated here...? i.e p is now assigned 25;    
  cout<<"c = "<< c <<endl;
  cout<<"a = "<< a <<endl;
 return 0;
} 