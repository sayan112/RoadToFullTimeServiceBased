#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int n;
     cin>>n;
     vector<int>vec;
      for(int i=0; i<n; i++)
      {
         int a;
          cin >>a;
           vec.push_back(a);
      }
       int maxi=vec[0];
        int count =0;
       for(auto elem : vec)
       {

 if(maxi<elem)
 {
    count++;
    maxi=elem;
 }
       }
        cout << count << endl;


 }