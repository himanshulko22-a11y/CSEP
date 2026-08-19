#include <iostream> // Swap Adjacent Elements
using namespace std;
int main()
{
    cout << "Enter lenght and elements of array";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i = i + 2)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    else
        for (int i = 0; i < n - 1; i = i + 2)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}