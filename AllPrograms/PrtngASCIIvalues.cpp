#include<iostream>
using namespace std;
int main()
{
  char a[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  char b[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  //cout<<"Printing alphabets with their ASCII values.....! "<<endl;
  cout<<"Strings         ASCII value     Strings        ASCII value"<<endl;
  for(int i=0;i < 26; i++)
  {
    cout<<"   "<<a[i]<<"            "<<(int)a[i]<<"                 "<<b[i]<<"            "<<(int)b[i]<<endl;
  }

  char ch;
  cout<<"Which character you want in ASCII values..?"<<endl;
  cin>> ch;
  cout<< ch <<" in ASCII number is: "<<(int)ch<<endl;
  return 0;
}