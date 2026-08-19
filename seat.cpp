#include <iostream>  //hackerrank contest problem
#include <vector>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int min = 0, max = n - 1, mid;
    int key;int flag=0;
    cin >> key;
    while (min <= max)
    {
        mid = min + (max - min) / 2;
        if (key==arr[mid])
        {
            flag=1;
            cout<<mid;
            break;
        }
        else if(key>arr[mid])
        min=mid+1;
        else
        max=mid-1;
    }
    if(flag!=1)
    cout<<min;
    return 0;
}