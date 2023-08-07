// C Program to Add Two Matrices Using Multi - dimensional Arrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int col;
    cin >> col;
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    int b[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> b[i][j];
        }
    }

    int sum[row][col];
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
           cout << sum[i][j]<<" ";
        }
        cout <<endl;
    }
}