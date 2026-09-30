#include <bits/stdc++.h>
using namespace std;
void sub(string s, string ans, int i, int k)
{
    if (i == s.length())
    {
       if(ans.length()==k)
            cout << ans << " ";
        return;
    }

    sub(s, ans + s[i], i + 1, k);
    sub(s, ans, i + 1, k);
}
int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    sub(s, "", 0, k );
}