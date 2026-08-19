#include <bits/stdc++.h> // Equilibrium Index
using namespace std;     //HACKERRANK CONTEST PROBLEM
int main()
{
    int n,sl,sr,i,j;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++)
    cin>>arr[i];
    if(n==1)
    {
        cout<<0;
        return 0;
    }
    for( i=0;i<n;i++)
    {
        sr=0;
        sl=0;
        for( j=i+1;j<n;j++)
        {
            sr=sr+arr[j];
        }
        if(i==0)
        {
            if(sr==0)
            {
                cout<<0;
                break;
            }
        }
        for(j=i-1;j>=0;j--)
        {
            sl=sl+arr[j];
        }
        if(i==(n-1))
        {
            if(sl==0)
            {
                cout<<n-1;
                break;
            }
        }
        if(sr==sl)
        {
            cout<<i;
            break;
        }
    }
    if(i==n)
    {
        cout<<-1;
    }
    return 0;
}