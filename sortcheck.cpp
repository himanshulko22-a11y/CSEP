#include <iostream>  // Sorted Array Check
#include <vector>
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
    if (arr[0] > arr[1])
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
                continue;
            else
            {
                cout << "array not sorted";
                return 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] < arr[i + 1])
                continue;
            else
            {
                cout << "array not sorted";
                return 0;
            }
        }
    }
    cout << "Array is sorted";
    return 0;
}