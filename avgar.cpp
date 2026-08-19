#include <bits/stdc++.h> // Elements Above Average
using namespace std;
int main()
{
    cout << "Enter lenght and elements of array";
    int n;
    cin >> n;
    int arr[n],sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum=sum+arr[i];
    }
    int avg=sum/n;
    cout<<"avg= "<<avg<<"\n";
        for (int i = 0; i < n; i++)
    {
        if(arr[i]>avg)
        cout<<arr[i]<<" ";
    }

    return 0;
}