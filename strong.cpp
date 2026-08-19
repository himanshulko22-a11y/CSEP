#include <iostream> //strong number
using namespace std;
int main()
{
    int n,d,fact=1,sum=0;
    cout <<"enter a number ";
    cin>> n;
    int num=n;
    while (n!=0)
    {
     d=n%10;
    for ( int i =1;i<=d;i++)
    {
      fact=fact*i;
    }
    sum = sum+fact;
    fact=1;
    n=n/10;
    }
    if (num==sum)
    cout<< " its strong number";
    else
    cout<<"its not a strong number";
   return 0;
}