#include<iostream>
using namespace std;
int main()
{
  int n,fact=1;
  cout<<"Progrm to find the factorial of a number."<<endl;
  cout<<"Enter a number to find its factorial:"<<endl;
  cin>> n;
  while(n<0)
  {
    cout<<"Unable to find fctorial of a negative number."<<endl;
    cout<<"Please enter a positive number:"<<endl;
    cin>> n;
  }
   for(int i = 2; i<=n;i++)
       {
         fact = fact*i;
       }
cout<<"Factorial of "<< n << " is:"<<fact<<endl;
return 0;
}