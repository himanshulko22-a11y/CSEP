#include<iostream> //reverse a number
using namespace std;
int main()
{
    int n=56782,d,rev=0;
    while (n!=0)
    {
       d=n%10;
       rev=rev*10+d;
       n=n/10;
    }
    cout<< rev;
    return 0;
} 