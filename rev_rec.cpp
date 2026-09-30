#include <bits/stdc++.h>
using namespace std;
void rev(int n)
{
    if(n==0)
    return;
    int d=n%10;
    cout<<d;
    rev(n/10);

}
int main()
{
    int n;
    cin>>n;
    rev(n);
    return 0;
}