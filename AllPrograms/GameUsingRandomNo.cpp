#include<iostream>
#include<time.h>
using namespace std;
int main()
{
  int guess,n,level,count=0,count1=0;
  cout<<"This is a game program."<<endl;
  cout<<"You have to guess the right number."<<endl;
  cout<<"Your score will be calculated on the basis of your number of attempts."<<endl;
  cout<<"You will be given only 10 chances."<<endl;
  cout<<"Please select from the following level:"<<endl;
  cout<<"Level 1. 0-100"<<endl;
  cout<<"Level 2. 0-250"<<endl;
  cout<<"Level 3. 0-500"<<endl;
  cout<<"Level 4. 0-750"<<endl;
  cout<<"Level 5. 0-1000"<<endl;
  cin>>level;
  while (level>5)
     {
       cout<<"Please select from the given levels."<<endl;
       cin>>level;
       count1++;
       if(count1>=2)
       {
         cout<<"Gadha ....5 hi level hai n..!"<<endl;
          cout<<"Fir se run karo program ko aur sahi se level select karna."<<endl;
          exit(1); 
       }
     }
  switch (level)
  {
  case 1 : cout<<"You are in level 1."<<endl;
           cout<<"Please guess a number between 1-100."<<endl;
           srand(time(NULL));
           n=rand()%100+1;
           do{
             cin>>guess;
             if(guess>n)
             {
               cout<<"Your guessed number is greater."<<endl;
               cout<<"Please try again."<<endl; 
             }
             else if(guess<n)
             {
               cout<<"Your guessed number is smaller."<<endl;
               cout<<"Please try again."<<endl;
             }
             else
             {
               cout<<"You guessed right!";
             }
             count++;
           }while(guess!=n);
             if(count <=2)
             {
               cout<<"You have taken only "<<count<<" chances."<<endl;
               cout<<"Your performance is EXCELLENT."<<endl;
             }
             else if(count >= 2 && count <=5)
             {
               cout<<"You have taken only "<<count<<" chances."<<endl;
               cout<<"Your performance is VERY GOOD."<<endl;
             }
             else if(count >= 5 && count <=8)
             {
               cout<<"You have taken only "<<count<<" chances."<<endl;
               cout<<"Your performance is GOOD."<<endl;
             }
             else if(count >= 8 && count <=10)
             {
               cout<<"You have taken only "<<count<<" chances."<<endl;
               cout<<"Your performance is NOT GOOD."<<endl;
             }
             else
             {
               cout<<"You have taken "<<count<<" chances."<<endl;
               cout<<"You LOST."<<endl;
             }
          break;
  case 2 : cout<<"You are in level 2."<<endl;
  cout<<"Please guess a number between 1-250."<<endl;
  srand(time(NULL));
  n=rand()%250+1;
  do{
    cin>>guess;
    if(guess>n)
    {
      cout<<"Your guessed number is greater."<<endl;
      cout<<"Please try again."<<endl; 
    }
    else if(guess<n)
    {
      cout<<"Your guessed number is smaller."<<endl;
      cout<<"Please try again."<<endl;
    }
    else
    {
      cout<<"You guessed right!";
    }
    count++;
  }while(guess!=n);
    if(count <=2)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is EXCELLENT."<<endl;
    }
    else if(count >= 2 && count <=5)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is VERY GOOD."<<endl;
    }
    else if(count >= 5 && count <=8)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is GOOD."<<endl;
    }else if(count >= 8 && count <=10)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is NOT GOOD."<<endl;
    }
    else{
      cout<<"You have taken "<<count<<" chances."<<endl;
      cout<<"You LOST."<<endl;
      cout<<"You should try another level."<<endl;
    }
    break;
  case 3 : cout<<"You are in level 3."<<endl;
  cout<<"Please guess a number between 1-500."<<endl;
  srand(time(NULL));
  n=rand()%500+1;
  do{
    cin>>guess;
    if(guess>n)
    {
      cout<<"Your guessed number is greater."<<endl;
      cout<<"Please try again."<<endl; 
    }
    else if(guess<n)
    {
      cout<<"Your guessed number is smaller."<<endl;
      cout<<"Please try again."<<endl;
    }
    else
    {
      cout<<"You guessed right!";
    }
    count++;
  }while(guess!=n);
    if(count <=2)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is EXCELLENT."<<endl;
    }
    else if(count >= 2 && count <=5)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is VERY GOOD."<<endl;
    }
    else if(count >= 5 && count <=8)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is GOOD."<<endl;
    }else if(count >= 8 && count <=10)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is NOT GOOD."<<endl;
    }
    else{
      cout<<"You have taken "<<count<<" chances."<<endl;
      cout<<"You LOST."<<endl;
      cout<<"You should try another level."<<endl;
      }
    break;
  case 4 : cout<<"You are in level 4."<<endl;
  cout<<"Please guess a number between 1-750."<<endl;
  srand(time(NULL));
  n=rand()%750+1;
  do{
    cin>>guess;
    if(guess>n)
    {
      cout<<"Your guessed number is greater."<<endl;
      cout<<"Please try again."<<endl; 
    }
    else if(guess<n)
    {
      cout<<"Your guessed number is smaller."<<endl;
      cout<<"Please try again."<<endl;
    }
    else
    {
      cout<<"You guessed right!";
    }
    count++;
  }while(guess!=n);
    if(count <=2)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is EXCELLENT."<<endl;
    }
    else if(count >= 2 && count <=5)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is VERY GOOD."<<endl;
    }
    else if(count >= 5 && count <=8)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is GOOD."<<endl;
    }else if(count >= 8 && count <=10)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is NOT GOOD."<<endl;
    }
    else{
      cout<<"You have taken "<<count<<" chances."<<endl;
      cout<<"You LOST."<<endl;
      cout<<"You should try another level."<<endl;
    }
    break;
  case 5 : cout<<"You are in level 5."<<endl;
  cout<<"Please guess a number between 1-1000."<<endl;
  srand(time(NULL));
  n=rand()%1000+1;
  do{
    cin>>guess;
    if(guess>n)
    {
      cout<<"Your guessed number is greater."<<endl;
      cout<<"Please try again."<<endl; 
    }
    else if(guess<n)
    {
      cout<<"Your guessed number is smaller."<<endl;
      cout<<"Please try again."<<endl;
    }
    else
    {
      cout<<"You guessed right!";
    }
    count++;
  }while(guess!=n);
    if(count <=2)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is EXCELLENT."<<endl;
    }
    else if(count >= 2 && count <=5)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is VERY GOOD."<<endl;
    }
    else if(count >= 5 && count <=8)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is GOOD."<<endl;
    }
    else if(count >= 8 && count <=10)
    {
      cout<<"You have taken only "<<count<<" chances."<<endl;
      cout<<"Your performance is NOT GOOD."<<endl;
    }
    else
    {
      cout<<"You have taken "<<count<<" chances."<<endl;
      cout<<"You LOST."<<endl;
      cout<<"You should try another level."<<endl;
    }
    break;
  default:
  break;
    }
    return 0;
}
