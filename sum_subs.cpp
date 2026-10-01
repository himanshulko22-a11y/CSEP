#include <bits/stdc++.h>
using namespace std;
void sub(vector<int> &arr, vector<int> &ans,int i,int k)
{
    if(i==arr.size())
    {
        int sum=reduce(ans.begin(),ans.end());
        if(sum==k)
        {
           for(int j=0;j<ans.size();j++)
           cout<<ans[j]<<" ";
           cout<<'\n';
        }
        
        return;
    }
    ans.push_back(arr[i]);
    sub(arr,ans,i+1,k);
    ans.pop_back();
    sub(arr,ans,i+1,k);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr)
        cin >> x;
    int k;
    cin >> k;
    vector<int> ans;
    sub(arr, ans, 0, k);
    return 0;
}