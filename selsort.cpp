#include <bits/stdc++.h> //selection sort
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int min=INT_MAX,temp,j,l;
    for(int i=0;i<n;i++)
    {
        for( j=i;j<n;j++)
        {
         if(arr[j]<min)
         {
         min=arr[j];
         l=j;
         }
        }
        temp=arr[i];
        arr[i]=arr[l];
        arr[l]=temp;
        min=INT_MAX;

    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}