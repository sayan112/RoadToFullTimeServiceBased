#include<bits/stdc++.h>
using namespace std;
int main()
{
    int bineary ;
    cin >> bineary ;
     
     int decimal=0; 
      int count =0;
    while(bineary!=0)
    {
     int remiander=bineary%10;

     decimal += remiander * pow(2,count);
     count++;
      bineary=bineary/10;
    }
    cout << decimal << endl;
}