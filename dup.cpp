#include <bits/stdc++.h> // Digits Occurring Twice
using namespace std;
int main()
{
    cout << "enter array length and elements";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;
    for (int i = 0; i < n; i++)
    {
        switch (arr[i])
        {
        case 0:
            if (c0 != 2)
                c0++;
            break;
        case 1:
            if (c1 != 2)
                c1++;
            break;
        case 2:
            if (c2 != 2)
                c2++;
            break;
        case 3:
            if (c3 != 2)
                c3++;
            break;
        case 4:
            if (c4 != 2)
                c4++;
            break;
        case 5:
            if (c5 != 2)
                c5++;
            break;
        case 6:
            if (c6 != 2)
                c6++;
            break;
        case 7:
            if (c7 != 2)
                c7++;
            break;
        case 8:
            if (c8 != 2)
                c8++;
            break;
        case 9:
            if (c9 != 2)
                c9++;
            break;
        }
    }
    int arm[n], i = 0;

    if (c0 == 2)
    {
        arm[i] = 0;
        i++;
    }
    if (c1 == 2)
    {
        arm[i] = 1;
        i++;
    }
    if (c2 == 2)
    {
        arm[i] = 2;
        i++;
    }
    if (c3 == 2)
    {
        arm[i] = 3;
        i++;
    }
    if (c4 == 2)
    {
        arm[i] = 4;
        i++;
    }
    if (c5 == 2)
    {
        arm[i] = 5;
        i++;
    }
    if (c6 == 2)
    {
        arm[i] = 6;
        i++;
    }
    if (c7 == 2)
    {
        arm[i] = 7;
        i++;
    }
    if (c8 == 2)
    {
        arm[i] = 8;
        i++;
    }
    if (c9 == 2)
    {
        arm[i] = 9;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        cout << arm[j]<<" ";
    }
    return 0;
}