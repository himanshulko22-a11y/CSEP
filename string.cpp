#include <bits/stdc++.h> //all string basics
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    cout << s;
    cout << " " << s.length() << "\n";
    cout << "\\n"<< " " << "\\o"<<"\n";
    int v = 0, c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case 'a':
            v++;
            break;
        case 'e':
            v++;
            break;
        case 'i':
            v++;
            break;
        case 'o':
            v++;
            break;
        case 'u':
            v++;
            break;
        case ' ':
            break;
        default:
            c++;
        }
    }
    cout << "vowels=" << v << " " << "consonants=" << c << "\n";
    cout << "enter character" << "\n";
    char ch;
    cin >> ch;
    int i;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == ch)
        {
            cout << "First occurance = " << i << "\n";
            break;
        }
    }
    if (i == s.length())
        cout << "not found";
    else
        for (i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == ch)
            {
                cout << "Last occurance = " << i << "\n";
                break;
            }
        }
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev += s[i];
    }
   
    if (rev == s)
        cout << "Its palindrome string" << "\n";
    else
        cout << "Its not palindrome string" << "\n";
}