#include <bits/stdc++.h>
using namespace std;
int c=0;
void sub(string s, string ans, int i)
{
    if (i == s.length())
    {
        c++;
        cout << ans << " ";
        return;
    }

    sub(s, ans + s[i], i + 1);
    sub(s, ans, i + 1);
}
int main()
{
    string s;
    cin >> s;
    sub(s, "", 0);
   
    cout<<c-1 ;
}