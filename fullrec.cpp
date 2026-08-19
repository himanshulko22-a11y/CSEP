#include <iostream> //full rectangle pattern
using namespace std;
int main()
{
    int l,b;
    cout<<"Enter length and breadth for full rectangle";
    cin>>l>>b;
    for (int i=0;i<l;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}