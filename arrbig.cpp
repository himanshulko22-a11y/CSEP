#include <bits/stdc++.h> // Largest Element
using namespace std;
int main()
{
    cout << "enter array length and elements" << "\n";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, b;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > l)
            l = arr[i];
    }
    cout << "Largest digit = " << l;
    return 0;
}