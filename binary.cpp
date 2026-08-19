#include <iostream> //binary search
using namespace std;
int main()
{
    cout << "enter length of array" << "\n";
    int n;
    cin >> n;
    int arr[n];
    cout << "enter sorted array" << "\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min, max, mid;
    min = 0;
    max = n - 1;
    int key;
    cout << "enter element to search" << "\n";
    cin >> key;
    if (key >= arr[0] && key <= arr[n - 1])
    {
        for (int i = 0; i < ((max+min)/2)+1 ; i++)
        {
            mid = (min + max) / 2;
            if (key == arr[mid])
            {
                cout << "found element at " << mid << " index.";
                break;
            }
            else if (key > arr[mid])
            {
                min = mid + 1;
            }
            else
                max = mid - 1;
        }
    }
    else
        cout << "Element not found";
    return 0;
}