#include <iostream> //happy number
using namespace std;
int nx;
int happy(int n)
{
    int d, sum = 0;
    while (n != 0)
    {
        d = n % 10;
        sum = sum + d * d;
        n = n / 10;
    }
    nx = sum;
    return sum;
}
int main()
{
    int n, c = 100;
    cout << "enter a number ";
    cin >> n;
    while (happy(n) != 1)
    {
        if (nx != 1)
        {
            c--;
            if (c == 0)
            {
                cout << "its not happy number";
                return 0;
            }
        }
        n = nx;
    }
    cout << "Its happy number";
    return 0;
}