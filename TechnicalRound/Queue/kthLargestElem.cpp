// https://www.geeksforgeeks.org/implement-min-heap-using-stl/
#include<bits/stdc++.h>
using namespace std;
void findkthlargest ( int arr[] , int k, int n  )
{
//    sort(arr,arr+n);
//     cout << arr[n-k];
priority_queue<int, vector<int>, greater<int>> pq;
 for (int  i = 0; i < n ; i++)
 {
     
pq.push(arr[i]);
 if(pq.size()>k)
 {
     pq.pop();
 }

 }
 cout << pq.top() << endl;
  
 
}
 int main()
{
    int n;
    cin >> n;
    int arr[n+1];
     for (int i = 0; i < n ; i++)
     {
        cin>> arr[i];
     }
      int k;
       cin>>k;
        findkthlargest(arr,k,n);
     
 }