#include <iostream> // Add 2 to Elements
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
        arr[i] += 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}