#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    int i = low, j = mid + 1;
    vector<int> arrmerged;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            arrmerged.push_back(arr[i]);
            i++;
        }
        else
        {
            arrmerged.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        arrmerged.push_back(arr[i]);
        i++;
    }
    while (j <= high)
    {
        arrmerged.push_back(arr[j]);
        j++;
    }
    for (int i = 0; i < arrmerged.size(); i++)
        arr[low + i] = arrmerged[i];
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int low = 0, high = arr.size() - 1;
    mergeSort(arr, low, high);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i];
    return 0;
}