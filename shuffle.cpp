#include <bits/stdc++.h>  //shuffle string chars
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    vector<int> arr(s.length());
    for (int i = 0; i < arr.size(); i++)
    cin>>arr[i];
    for(int i=0;i<=arr.size();i++)
    {
        for(int j=0;j<=arr.size();j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swap(s[j],s[j+1]);

            }
        }
    }
    cout<<s;
}