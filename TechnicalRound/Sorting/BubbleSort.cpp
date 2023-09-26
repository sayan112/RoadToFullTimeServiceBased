#include<iostream>
#include<vector>
using namespace std;
 void sortBubble(vector<int> &vec)
 {
    int counter=1;
     while (counter<vec.size())
     {
        for (int i = 0; i < vec.size()-counter; i++)
        {
            if(vec[i]>vec[i+1])
            {
                swap(vec[i],vec[i+1]);
             
            }
        }
        counter++;
        
     }
    
 }
 int main ()
 {
    int n ;
     cin>> n ; 
      vector<int>vec;
       for (int i = 0; i < n ; i++)
       {
        int need;
         cin>>need;
          vec.push_back(need);

       }
        sortBubble(vec);
         for(auto elem:vec)
         {
            cout<<elem <<" ";
         }
       
 }




// Bubble Sort:

// Best-case: O(n) - This occurs when the input array is already sorted, and no swaps are needed.
// Worst-case: O(n^2) - When the input is sorted in reverse order, it requires the maximum number of comparisons and swaps.
// Average-case: O(n^2) .