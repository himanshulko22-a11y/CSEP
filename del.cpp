#include <bits/stdc++.h> //deletion in array
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
    cout << "enter position to be deleted between index 0 and "<<(n-1)<<"\n ";
        int pos;
    cin >> pos;
    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}