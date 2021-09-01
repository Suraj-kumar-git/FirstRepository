#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  double income,tax;
  cout<<"This is a tax calculator."<<endl<<endl;
  cout<<"Please enter your income(in lac):";
  cin>>income;
  cout<<endl;
  if(income<0)
  {
    cout<<"Invalid income. Please input your income again.:"<<endl;
    cin>>income;
  }
  if(income>=0 && income<= 2.5)
  {
    cout<<"Your income falls between 0.0-2.5 lac."<<endl;
    cout<<"Hence no tax is applied."<<endl;
    tax = 0;
    cout<<"You spend total of "<<tax<<"lac in tax."<<endl;
  }
  else if(income>= 2.5 && income <= 4.0)
  {
    cout<<"Your income falls between 2.5-4.0 lac."<<endl;
    tax = income*5/100;
    cout<<"You spend total of "<<tax<<"lac in tax."<<endl;
  }
  else if(income>= 4.0 && income <= 6.0)
  {
    cout<<"Your income falls between 4.0-6.0 lac."<<endl;
    tax = income*10/100;
    cout<<"You spend total of "<<tax<<"lac in tax."<<endl;
  }
  else if(income>= 6.0 && income <= 9.0)
  {
    cout<<"Your income falls between 6.0-9.0 lac."<<endl;
    tax = income*15/100;
    cout<<"You spend total of "<<tax<<"lac in tax."<<endl;
  }
  else if(income>= 9.0 && income <= 15.0)
  {
    cout<<"Your income falls between 9.0-15.0 lac."<<endl;
    tax = income*20/100;
    cout<<"You spend total of "<<tax<<"lac in tax."<<endl;
  }
  else
  {
    cout<<"Your income is more than 15.0 lac."<<endl;
    tax = income*25/100;
    cout<<"You spend total of "<<tax<<"lac in tax."<<endl;
  }
  cout<<"Your overall income is: "<<income - tax <<"lac."<<endl;
  cout<<"Income table is given below."<<endl<<endl;
  cout<<"income(in lac)           Applied tax"<<endl;
  cout<<"0.0-2.5                    0(No tax)"<<endl;
  cout<<"2.5-4.0                    5%"<<endl;
  cout<<"4.0-6.0                    10%"<<endl;
  cout<<"6.0-9.0                    15%"<<endl;
  cout<<"9.0-15.0                   20%"<<endl;
  cout<<"15.0 and above             25%"<<endl;
}