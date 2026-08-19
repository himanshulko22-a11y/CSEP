#include <bits/stdc++.h> //hackerrank contest problem
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cin>>key;
    int i;
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
        cout<<i<<" ";
        break;
        }
    }
    if(i==n)
    {
        cout<<-1<<" "<<-1;
        return 0;
    }
    for(i=n-1;i>=0;i--)
    {
        if(key==arr[i])
        {
            cout<<i;
            break;
        }
    }
}