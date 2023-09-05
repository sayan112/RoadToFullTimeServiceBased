// 30 & 140 are friendly pairs
// Two numbers num1 & num2 are friendly pairs if the following holds true -

// (Sum of divisors of num1) / num1 = (Sum of divisors of num2) / num2



#include<bits./stdc++.h>
using namespace std;
int generatedivisors (int num)
{
int sum =0;
 for (int  i =1; i < num; i++)
 {
    if(num%i==0)
    {
sum+=i;
    }
 }
  return sum;
 
}

 int main()
{
    int num1, num2;
     cin>>num1>>num2;
     int divisorsum1= generatedivisors(num1);

     int divisorsum2 = generatedivisors(num2);
     if ((divisorsum1 / num1) == (divisorsum2 / num2))
     {
        cout << "friendly pair it is "<<endl;
     }
     else{
         cout << " not friendly pair  "<<endl;
     }
 }