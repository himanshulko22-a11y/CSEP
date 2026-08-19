#include <bits/stdc++.h> // armstrong number
using namespace std;
int main()
{

    int n,d,sum=0,c=0;
    cout << " Enter a number ";
    cin >>n;
    int num= n;
    while (n!=0)
    {
       c++;
       n=n/10;
    }
    n=num;
    int p=1;
    while (n!=0)
    {
        d=n%10;
    for(int i=0;i<c;i++)
    {
    p*=d;
    }
    sum=sum+p;
    p=1;
    n=n/10;
    }
    if(sum==num)
    cout<<"its armstrong number";
    else
    cout<<"its not armstrong number";
    return 0;
} 