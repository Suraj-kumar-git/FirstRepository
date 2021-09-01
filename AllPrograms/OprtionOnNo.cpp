#include<iostream>
using namespace std;
/*int fac(int);
int mult(int);
int sod(int);
int fact(int);*/
int main()
{
  int n;
  cout<<"This is a calculator program."<<endl;
  cout<<"Please choose from the following operations."<<endl;
  


  
  
  
  cout<<"7. HCF"<<endl;
  cout<<"8. LCM"<<endl;
  cout<<"9. Sum of digits"<<endl;
 
  cin>>n;
  while(n>= 11 && n<=0)
  {
    cout<<"Please choose from the above options. Select the number you want to perform the operation"<<endl;
    cin>>n;
  }
  switch(n)
  {
    case 1: char response;
            double a,sum = 0;
            do
            {
              cout<<"Enter numbers to add:";
              cin>>a;
              sum = sum + a;
              cout<<"Press '+' to continue:"<<endl;
              cout<<"Or press any other key to get total."<<endl;
              cin>>response;
            }
            while(response == '+');
            cout<<"Total sum is: "<<sum<<endl;
     break;
    case 2: char response;
            double a,sub = 0;
            do
            {
              cout<<"Enter numbers to subtract:";
              cin>>a;
              sub = a - sub;
              cout<<"Press '-' to continue."<<endl;
              cout<<"Or press any other key to get total."<<endl;
              cin>>response;
            }
            while(response == '-');
            cout<<"Result is: "<<sum<<endl;
     break;
    case 3: char response;
            double a,mul = 1;
            do
            {
              cout<<"Enter numbers to multiply:";
              cin>>a;
              mul =  mul*a;
              cout<<"Press '*' to continue:"<<endl;
              cout<<"Or press any other key to get total."<<endl;
              cin>>response;
            }
            while(response == '*');
            cout<<"Total product is: "<<sum<<endl; 
     break;
    case 4: double div,a,b;
            
            cout<<"Enter dividend:";
            cin>> a;
            cout<<endl<<"Enter divisor:";
            cin>> b;
            div = a/b;
            cout<<"quotient = "<<div<<endl;
            if(int(a) % int(b) == 0)
            {
              cout<<b<<" is a factor of "<<a<<endl;
            }
     break;
    case 5: int a,b; 
            cout<<"Please input your number:"<<endl;
            cin>> a;
            cout<<"Factors of "<<a<<"are: 1  ";
            for(int i=2;i<=a;i++)
            {
              if(int (a) % i==0)
              {
                b=i;
                cout<<b<<"  "<<endl;
              }
            }
     break;
    case 6: 
     break;
    case 7: 
     break;
    case 8: 
     break;
    case 9: int sod(int);
     break;
    case 10: int fact(int);
     break;
  }
  return 0;
}

