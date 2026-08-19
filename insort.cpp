#include <bits/stdc++.h> // Insertion Sort
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],temp;
    for (int i=0;i<n;i++)
    cin>>arr[i];
    if(n==1)
    {
        cout<<arr[0];
        return 0;
    }
    
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<=arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            else
            break;            
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}