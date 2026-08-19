#include<iostream> //count no. of digits
using namespace std;
int main()
{
    int n=28765,c=0;
    while (n!=0)
    {
        c++;
        n=n/10;
    }
    cout<< c;
    return 0;
}