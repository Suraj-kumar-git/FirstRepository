 #include<iostream>
using namespace std;
int main()
{
  cout<<"Program to see the use of break keyword."<<endl;
  //Multiples of a number upto a range.
 //Leaving multiples of 5
  /*for(int i=1;i<=100;i++)
  {
    
    if(i%5==0)
    {
      continue;
    }
    else
    {
      cout<<i<<" ";;
    }
  }*/
  //Printing multiples of 5.
    for(int i=1;i<=100;i++)
    {
      if(i%5 == 0)
      {
        cout<<i<<" ";
      }
      else
      {
        continue;
      }
    }
  return 0;
}