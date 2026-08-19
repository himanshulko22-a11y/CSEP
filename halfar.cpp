#include <iostream> // Missing Elements
using namespace std;
int main()
{
    cout << "Enter lenght and elements of array";
    int n;
    cin >> n;
    int arr[n], min = 9, max = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    int i;
    for (int j = min; j < max; j++)
    {
        for ( i = 0; i < n; i++)
        {
            if (arr[i] == j)
            {
                break;
            }
        }
        if(i==n)
        cout<<j<<" ";
    }
    return 0;
}