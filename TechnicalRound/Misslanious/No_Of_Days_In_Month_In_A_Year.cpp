#include<bits/stdc++.h>
using namespace std;
 void no_of_days_in_month_in_year ( int month , int year)

{

 bool leapyear = false;
  if(year%4==0)
  {
   if(year%100!=0)
   {
     leapyear=true;
   }
   else{
    if(year%400==0)
    {
        leapyear=true;
    }
   }
  }
if(month<=12)
{


   if(month==2)
   {
    if(leapyear)
    {
        cout << "29 DAYS IN THIS MONTH" << endl;
    }
    else{
        cout << "28 DAYS IN THIS MONTH" << endl;
    }
   }
   else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
   {
    cout << "31 DAYS IN THIS MONTH" << endl;
   }
   else{
    cout << "30 DAYS IN THIS MONTH" << endl;
   }
}
else{
    cout<< "PLS ENTER VALID MONTH :)"<<endl;
}
}



 int main()
 {
     int month;
      int year ;
       cin>> month >>year;
    no_of_days_in_month_in_year(month,year);
 }