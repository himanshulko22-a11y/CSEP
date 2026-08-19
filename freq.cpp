#include<iostream> //frequency
using namespace std;
int main()
{

    int n,num,d,sum=0,c=0;
    cout << " Enter a number ";
    cin >>n;
     cout << " Enter a digit ";
    cin >>num;
    while (n!=0)
    {
       d=n%10;
       if (num==d)
       c++;
       n=n/10;
    }
    cout<<c;
    return 0;
} 