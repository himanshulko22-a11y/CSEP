#include <iostream> // Left Right Sum Difference
#include <cmath>    //HACKERRANK CONTEST PROBLEM
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int l=0,r=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            for(int j=1;j<n;j++)
            r=r+arr[j];
        }
        else if(i==(n-1))
        {
            for(int j=(n-2);j>=0;j--)
            {
                l=l+arr[j];
            }
        }
        else
        {
          for(int j=0;j<i;j++)
          l=l+arr[j];
          for(int j=i+1;j<n;j++)
          r=r+arr[j];
        }
        cout<<abs(l-r)<<" ";
        l=0;
        r=0;
    }
}