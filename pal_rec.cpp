#include <bits/stdc++.h>
using namespace std;

int rev(int n,int r=0)
{
    
    if(n==0)
    return r;
    return rev(n/10,r*10+n%10);
}
int main()
{
    int n;
    cin>>n;
    int nn=n;
    cout<<rev(n);
    if(rev(n)==nn)
    cout<<"palindrome";
    else
    cout<<"not palindrome";
    return 0;
}