// Sort first k values in ascending order and remaining n - k values in descending order

 #include<bits/stdc++.h>
 using namespace std;
 void sorttillKth (vector<int>&vec , int k )
 {

 sort(vec.begin(),vec.begin()+k);
 sort(vec.begin()+k, vec.end(), greater<int>());

 }
  int main()
 {
     int n;
     cin>> n;
      vector<int>vec;
       for (int i = 0; i < n ; i++)
       {
        int need;
         cin>> need;
         vec.push_back(need);
       }
        int k ;
        cin>> k;
         sorttillKth(vec,k);
      
       for(auto elem : vec)
       {
         cout << elem <<" ";
       }
       
       // Time Complexity: O(N * log(N))
       //   Auxiliary Space : O(1)
  }