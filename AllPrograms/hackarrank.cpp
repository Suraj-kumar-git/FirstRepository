#include<iostream>
using namespace std;
/*void fun(int*, int*);
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    fun(&a,&b);
    cout<<a<<endl<<b;
    return 0;
}
void fun(int *value1,int *value2)
{
    int sum = *value1 + *value2;
    int dif = abs(*value1 - *value2);
    *value1 = sum;
    *value2 = dif;
}
int main()
{
    int a[4]={1,4,3,2};
    for(int i=3;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}*/
int main() {
    int n;  
    cin >> n;
    const int a = n;
    int arr[a];
    arr[0]=1;
    arr[1]=4;
    arr[2]=3;
    arr[3]=2;
    for(int i=3;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}