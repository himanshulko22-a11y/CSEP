#include <bits/stdc++.h> // Array Insertion
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
    cout << "enter new element and position between index 0 and "<<(n-1)<<"\n ";
        int a,b;
    cin >> a>>b;
    for (int i = (n-2); i >= b; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[b] = a;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}