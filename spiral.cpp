#include <bits/stdc++.h> //spiral matrix
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int ct = r * c;
    int arr[ct];
    for (int i = 0; i < ct; i++)
        cin >> arr[i];
    int ar[r][c];
    int cts = 0;
    int lf = 0, ri = c - 1;
    int top = 0, bot = r - 1;
    while (top <= bot && lf <= ri)
    {
        // Left to Right
        for (int j = lf; j <= ri; j++)
            ar[top][j] = arr[cts++];
        top++;
        // Top to Bottom
        for (int i = top; i <= bot; i++)
            ar[i][ri] = arr[cts++];
        ri--;
        // Right to Left
        if (top <= bot)
        {
            for (int j = ri; j >= lf; j--)
                ar[bot][j] = arr[cts++];
            bot--;
        }
        // Bottom to Top
        if (lf <= ri)
        {
            for (int i = bot; i >= top; i--)
                ar[i][lf] = arr[cts++];
            lf++;
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << ar[i][j] << " ";
        cout << "\n";
    }
    return 0;
}