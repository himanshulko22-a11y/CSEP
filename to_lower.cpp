#include <bits/stdc++.h> // upper to lowewr case conversion
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   string low="";
   for(int i=0;i<s.length();i++)
   {
     low=low+(char)((int)s[i]+32);
   }
   cout<<low;
}