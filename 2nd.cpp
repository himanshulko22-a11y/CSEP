#include <bits/stdc++.h> //optimized version
using namespace std;
int main()
{
    int d = 0, max = -1, s = -1;
    cin >> d;
    while (d > 0)
    {
        int digit = d % 10;
        if (digit > max)
        {
            s = max;
            max = digit;
        }
        if (digit < max && digit > s)
        {
            s = digit;
        }
        d = d / 10;
    }
    cout << s;
    return 0;
}