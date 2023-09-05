// Strong Numbers is a number in which the sum of the factorial of individual digits of the numbers is equal to the number itself.

// For Example: 145 
// 145 = 1! x 4! x 5! =  145
#include <bits./stdc++.h>
using namespace std;

int main()
{
    int num1;
    cin >> num1;
      int temp = num1;
       int sum=0;
    while (temp != 0)
    {
        int remainder = temp % 10;
         int need =1;
          for(int i=1;i<=remainder;i++)
          {
            need*=i;
          }
          sum+=need;
        temp = temp / 10;
    }
    cout << num1<<" "<< sum<<endl;
    if (num1==sum)
    {
        cout << " its a Strong number" << endl;
    }
    else
    {
        cout << "its not " << endl;
    }
}
