#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
    int piv = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] < piv)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quick(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quick(arr, low, p - 1);
        quick(arr, p + 1, high);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low = 0, high = n - 1;
    quick(arr, low, high);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}