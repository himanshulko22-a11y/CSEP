#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        st.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = st.top();
        st.pop();
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}