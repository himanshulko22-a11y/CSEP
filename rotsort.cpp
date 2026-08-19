#include <bits/stdc++.h> //rotated sorted array
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        if((arr[i])>arr[i+1])
        c++;
        
    }
    if(c<2)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
    
}