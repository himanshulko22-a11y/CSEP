#include <bits/stdc++.h> //ip address ". -> [.]"
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   int c=0;
   string ip="";
   string add="[.]";
   for(int i=0;i<s.length();i++)
   {
      if(s[i]=='.')
     {
       ip=ip+add;
     }
     else
     ip=ip+s[i];
   }
   cout<<ip;
}