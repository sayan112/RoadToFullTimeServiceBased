#include<bits./stdc++.h>
using namespace std;
 int main ()
 {
     int n ;
      cin >> n ;
     int arr[n+1];
     for (int i = 0; i < n; i++)
     {
        cin>>arr[i] ;
     }
      int start = 0 ;
      int end = n-1 ;
      while (end>=start)
      {
        swap(arr[start],arr[end]);
        start++;
        end-- ;
      }
      for (int i = 0; i < n; i++)
      {
        cout<<  arr[i];
      }
 }