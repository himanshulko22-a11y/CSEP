#include <bits/stdc++.h> //reverse string
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   string rev="";
   for(int i=s.length()-1;i>=0;i--)
   {
     rev=rev+s[i];
   }
   cout<<rev;
}