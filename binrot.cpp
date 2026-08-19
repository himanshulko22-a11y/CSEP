#include <bits/stdc++.h> // binary search in rotated sorted array
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int min = 0, mid, max = n - 1, key;
    cin >> key;
    int result = -1;
    while (min <= max)
    {
        mid = min + (max - min) / 2;
        if (arr[mid] == key)
        {
            result = mid;
            break;
        }
        if (arr[min] <= arr[mid])
        {
            if (key >= arr[min] && key < arr[mid])
                max = mid - 1;
            else
                min = mid + 1; 
        }
        else
        {
            if (key > arr[mid] && key <= arr[max])
                min = mid + 1;
            else
                max = mid - 1;
        }
    }
    cout << result;
    return 0;
}