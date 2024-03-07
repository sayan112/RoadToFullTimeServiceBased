// Consider the following
// series: 0,0,2,1,4,2,6,3,8,4,10,5,12,6,14,7,16,8
// This series is a mixture of 2 series all the odd terms in this series form even numbers
// in ascending order and every even term is derived from the previous term using the formula (x/2).
// Write a program to find the nth term in this series.
// The value n is a positive integer that should be read from STDIN the nth term that is calculated by the program should be written to STDOUT. Other than the value of the nth term no other characters /strings or message should be written to STDOUT.

// 1 0
// 2 0
// 3 2
// 4 1
// 5 4
// 6 2
// 7 6
// 8 3
// 9 8
// 10 4
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n == 0 || n == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        if(n%2==0)
        {
          cout << (n-2)/2 <<endl;
        }
        else{
            cout << n-1 <<endl;
        }
    }
}