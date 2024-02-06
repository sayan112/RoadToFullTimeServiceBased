#include<bits/stdc++.h>
using namespace std;
 int maxelem=0;

 void recursive ( vector<int>vec,int idx)
 {
     if(idx>=vec.size())
     {
        return;
     }
 maxelem=max(maxelem,vec[idx]);
 
     recursive(vec,idx+1);
 }
 int main ()
 {
     
int size;
 cin >> size;
     vector<int>need;
      for(int i =0;i<size;i++)
      {
        int n ;
         cin >> n ;
         need.push_back(n);
      }
      // normal way 
     int maxi=INT_MIN;
      for(auto elem:need)
      {
          if(elem>maxi)
          {
            maxi=elem;
          }
      }
      cout <<maxi<<endl;
      // recursive way 
 int i =0;
       recursive(need,i);
       cout << maxelem<<endl;
 }