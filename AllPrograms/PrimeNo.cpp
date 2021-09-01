#include<iostream>
using namespace std;
void prime(int num);
int main()
{
   int n,i,m;
   cout<<"Programm to find prime numbers between a range."<<endl;
   cout<<"Input first number:"<<endl;
   cin>>n;
   cout<<"Input second number:"<<endl;
   cin>>m;
   cout<<"Prime numbers between "<<n<<" & "<<m<<" are:";
   for(i=n;i<=m;i++)
   {
      prime(i);
   }
   return 0;
}
void prime( int num)
{
  int count =0;
  for(int i=2; i< num; i++)
  {
    if (num % i == 0)
    {
      count++;
    }
  }
  if(count == 0)
  {
    cout<<num<<" ";
  }
}