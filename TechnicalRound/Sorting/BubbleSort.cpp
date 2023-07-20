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
                // swap(vec[i],vec[i+1]);
                 int temp= vec[i];
                 vec[i]=vec[i+1];
                  vec[i+1]=temp;
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