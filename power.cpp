#include <iostream> //x^power
using namespace std;
int main()
{
    int p=1,x,n;
    cout<<"enter number";
    cin >>x;
    cout <<"enter power";
    cin >>n;
    for(int i=0;i<n;i++)
    {
        p*=x;
    }
    cout<<p;
}