#include <bits/stdc++.h> // Even Index Product, Odd Index Sum
using namespace std;
int main()
{
    cout << "enter array length and elements";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    { 
        cin >> arr[i];
    }
    int sum = 0, prod = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            prod = prod * arr[i];
        else
            sum = sum + arr[i];
    }
    cout << "sum = " << sum << "\n";
    cout << "product = " << prod << "\n";
    return 0;
}