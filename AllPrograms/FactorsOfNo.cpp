#include<iostream>
using namespace std;
int main()
{
  int count=2,n;
  cout<<"Program to find factors of a number."<<endl;
  cout<<"Type which number's factors you want...:"<<endl;
  cin>>n;
  cout<<"Factors of "<<n<<" are: 1 ";
  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      cout<<i<<" ";
      count++;
    }
  }
  cout<<n<<endl<<"Total number of factors are: "<<count<<endl;
}