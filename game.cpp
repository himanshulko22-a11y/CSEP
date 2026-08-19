#include <iostream> // Rotation Check
#include <vector>
using namespace std;
int main()
{
    int n, i, ans=0, c = 0;
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            c++;
            if(c==1)
            ans = n-i-1;
        }
    }

    if (c < 2)
    {
        cout << ans;
    }
    else
        cout << -1;
    return 0;
}