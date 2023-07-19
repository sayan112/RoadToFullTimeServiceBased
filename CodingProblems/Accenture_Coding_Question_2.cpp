// Accenture Coding Question 2
// You are required to implement the following Function def LargeSmallSum(arr). 

// The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second  largest element from the even positions and second smallest from the odd position of given ‘arr’.

// Assumption:

// All array elements are unique
// Treat the 0th position a seven
// NOTE

// Return 0 if array is empty
// Return 0, if array length is 3 or less than 3
// Example:-

// Input

// arr:3 2 1 7 5 4

// Output

// 7


 #include<bits/stdc++.h>
 using namespace std;
  int LargeSmallSum(vector<int>&vec)
  {
     if(vec.size()<=3)
     {
         return 0;
     }
     vector<int>oddelems;
      vector<int>evenelems;
       for(int i = 0; i < vec.size(); i++)
       { 
        if(i%2==0)
       {
        evenelems.push_back(vec[i]);
       }
       else{
        oddelems.push_back(vec[i]);
       }

       }

        sort(evenelems.begin(),evenelems.end());
         sort(oddelems.begin(),oddelems.end());
         int secondlargest=evenelems[evenelems.size()-2];
          int secondsmallest=oddelems[1];
          return secondlargest + secondsmallest;
  }
  int main ()
  {
     vector<int>vec;
      for(int i =0; i < 7 ;i++)
      {
         int need;
          cin >> need;
           vec.push_back(need);
      }
     cout << LargeSmallSum(vec);
  }