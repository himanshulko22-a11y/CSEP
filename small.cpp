#include <iostream>   // Smallest Digit
using namespace std;
int main()
{
    int n=56287,s=9,d;
    while (n!=0)
    {
        d=n%10;
        if (s>d)
        s=d;
        n=n/10;
    }
    cout << s;
    return 0;
}
