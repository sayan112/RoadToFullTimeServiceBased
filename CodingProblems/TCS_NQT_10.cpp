// Write a c program, to check whether the given year is a leap year or not using command line arguments.A leap year is a calendar year // containing one additional day(Feb 29th) added to keep the calendar year synchronized with the astronomical year.
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int year;
      cin >> year;
       if(year%4==0)
       {
          if(year%100==0)
          {
             if(year%400==0)
             {
                cout << "true"<<endl;
             }
             else{
                 cout << "false" << endl;
             }
       
          }
          else{
            cout <<"true"<<endl;
          }      
       }
       else{
           cout << "false" << endl;
       }
 }