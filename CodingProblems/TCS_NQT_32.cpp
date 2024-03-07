// Jack is always excited about sunday. It is favourite day, when he gets to play all day. And goes to cycling with his friends. 

// So every time when the months starts he counts the number of sundays he will get to enjoy. Considering the month can start with any day, be it Sunday, Monday…. Or so on.

// Count the number of Sunday jack will get within n number of days.

//  Example 1:

// Input 

// mon-> input String denoting the start of the month.

// 13  -> input integer denoting the number of days from the start of the month.

// Output :

// 2    -> number of days within 13 days.

// Explanation:

// The month start with mon(Monday). So the upcoming sunday will arrive in next 6 days. And then next Sunday in next 7 days and so on.
// Now total number of days are 13. It means 6 days to first sunday and then remaining 7 days will end up in another sunday.Total 2 sundays may fall within 13 days.

#include<bits/stdc++.h>
    using namespace std;
 int main ()
 {
    string day ;
     cin >> day;
      int days;
       cin >> days;
        int daydistance=0;
   if(day=="Mon")
   {
       daydistance=6;
   }
   else if(day=="Tue")
   {
    daydistance=5;
   }
   else if (day == "wed")
   {
       daydistance = 4;
   }
   else if (day == "Thus")
   {
       daydistance = 3;
   }
   else if (day == "Fri")
   {
       daydistance = 2;
   }
   else if (day == "sat")
   {
       daydistance = 1;
   }

  if(daydistance>days)
  {
    cout << "0 sunday"<<endl;
  }
  else {
    int ans =1;
     days-=daydistance;
     while(days>0)
     {
        ans++;
days-=7;
     }
      cout <<"No of sundays are "<< ans <<endl;
  }

 }