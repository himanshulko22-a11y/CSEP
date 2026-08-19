#include <bits/stdc++.h> //wave 2d array
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];
            int last=c-1;
    for(int i=1;i<r;i+=2)
    {
        for(int j=0;j<c/2;j++)
        {
            swap(arr[i][j],arr[i][last]);
            last--;
        }
        last=c-1;
    }
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

}