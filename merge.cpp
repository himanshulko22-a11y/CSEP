#include <bits/stdc++.h>  //merge strings
using namespace std;
int main()
{
    string s1;
    getline(cin, s1);
    string s2;
    getline(cin, s2);
    string merge = "";
    int s1l=s1.length(),s2l=s2.length(),i=0;
    while(s1l!=0 || s2l!=0)
    {
        if(s1l!=0)
        {
            merge=merge+s1[i];
            s1l--;
        }
        if(s2l!=0)
        {
            merge=merge+s2[i];
            s2l--;
        }
        i++;
    }
    cout<<merge;    
}