#include <bits/stdc++.h> // 2nd largest
using namespace std;
int main()
{
    int r, c;
    cout<<"enter no. of rows and columns"<<"\n";
    cin >> r >> c;
    int arr[r][c];
    int sum = 0, d = 0;
    cout<<"enter elements"<<"\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            sum = sum + arr[i][j];
            if (i == j)
                d = d + arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }
    cout << "Col major: " << "\n";
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            cout << arr[i][j] << "\n";
        }
    }
    int sum1 = 0;
    cout << "sum of row elements" << "\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum1 += arr[i][j];
        }

        cout << "Row " << i + 1 << ": " << sum1 << "\n";
        sum1=0;
    }

    cout << "sum of all elements= " << sum << "\n";
    cout << "sum of diagonals= " << d << "\n";
    int k,j,f=0;
    cout<<"enter element to search"<<"\n";
    cin>>k;
     for (int i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
           if(k==arr[i][j])
           {
             f=1;
             break;
           }
        }
         if(k==arr[i][j])
           {
             break;
           }
    }
    if(f==1)
    cout<<"True";
    else
    cout<<"False";

}
