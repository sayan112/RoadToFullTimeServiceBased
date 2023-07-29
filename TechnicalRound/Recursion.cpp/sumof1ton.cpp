#include <bits/stdc++.h>
using namespace std;
void sumof1ton(int n, int &sum )
{
    if (n == 0)
    {
        return;
    }

       sum+=n;
    sumof1ton(n - 1,sum);
}

int main()
{
    int n;
    cin >> n;
     int sum =0;
    sumof1ton(n,sum);
     cout << sum << endl;
}


// input -> 5 output -> 15 ((n)(n+1))/2