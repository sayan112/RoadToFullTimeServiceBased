// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int range;
//     cin >> range;
//     int first = 0;
//     int second = 1;
//     cout << first << " " << second << " ";
//     int nextFibonacchi = first + second;
//     while (nextFibonacchi <= range)
//     {
//         cout << nextFibonacchi << " ";
//         first = second;
//         second = nextFibonacchi;
//         nextFibonacchi = first + second;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void fibo(int first, int second, int range)
{

    int nextfibo = first + second;
    if (nextfibo >range)
    {
        return;
    }
    cout << nextfibo << " ";
    first = second; 
    second = nextfibo;

    fibo(first, second, range);
}
int main()
{
    int range;
    cin >> range;
    int first = 0;
    int second = 1;
    cout << first << " " << second << " ";

    fibo(first, second, range);
}