#include<iostream> //spy number
using namespace std;
int main()
{

    int n,d,sum=0,sum2=1;
    cout << " Enter a number ";
    cin >>n;
    int num= n;
    while (n!=0)
    {
       d=n%10;
       sum=sum+ d;
       sum2=sum2*d;
       n=n/10;
    }
    if(sum==sum2)
    cout<<"its spy number";
    else
    cout<<"its not spy number";
    return 0;
} 