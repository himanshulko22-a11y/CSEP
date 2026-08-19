#include <bits/stdc++.h>  //n times 2d array rotations
using namespace std;
int main()
{
    cout << "enter row and column and its elements" << "\n";
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    int ar2[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            ar2[i][j]=arr[i][j];
        }

    cout << "enter no of rotations" << "\n";
    int rot;
    cin >> rot;
    int k = rot = rot % 4;
    while (rot--)
    {
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
            {
                ar2[i][j] = arr[j][i];
            }

        for (int i = 0; i < r; i++)
        {
            int s = 0, e = c - 1;
            while (s < e)
            {
                int temp = ar2[i][s];
                ar2[i][s] = ar2[i][e];
                ar2[i][e] = temp;
                s++;
                e--;
            }
        }
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
            {
                arr[i][j] = ar2[i][j];
            }
    }
    cout << k << " rotations" << "\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << ar2[i][j]<<" ";
        }
        cout << "\n";
    }
}