#include <iostream> //triangle pattern
using namespace std;
int main()
{
    int l, b, c = 0;
    cout << "Enter base and height for lower right triangle";
    cin >> l >> b;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b-1; j++)
        {
            cout << " ";
        }
        b--;
        c++;
        for (int k = 0; k < c; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}