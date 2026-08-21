#include <bits/stdc++.h> //maximum words
using namespace std;
int main()
{
    cout<<"enter number of sentences"<<"\n";
    int n,c=1,max=-1;
    cin >> n;
    vector<string> arr(n);
    cin.ignore(); 
    for(int i=0;i<n;i++)
    getline(cin,arr[i]);
    for(int i=0;i<n;i++)
    {
        string s=arr[i];
        for(int j=0;j<s.length();j++)
        {
             if(s[j]==' ')
             c++;
        }
        if(c>max)
        max=c;
        c=1;
    }
    cout<<max;
}