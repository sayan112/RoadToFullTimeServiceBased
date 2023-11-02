#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 10;
    int b = 5;
    a = a ^ b; // 15
    b = a ^ b; // 10
    a = a ^ b;
    cout << a<<endl;
    cout << b<<endl;
}