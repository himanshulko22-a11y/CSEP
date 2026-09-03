#include <bits/stdc++.h> //leetcode 205 problem isomorphic
using namespace std;
bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length())
        return false;
    unordered_map<char, char> mp;
    for (int i = 0; i < s.size(); i++)
    {
        if (mp.find(s[i]) == mp.end())
        {
            bool found = false;
            for (auto it : mp)
            {
                if (it.second == t[i])
                {
                    found = true;
                    break;
                }
            }
            if (found)
                return false;

            mp[s[i]] = t[i];
        }
        else
        {
            if (mp[s[i]] == t[i])
            {
                continue;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    string s, t;
    cin >> s >> t;
    if (isIsomorphic(s, t))
        cout << "true";
    else
        cout << "false";
    return 0;
}