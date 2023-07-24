// Floor of 5 it means = greatest elem which is smaller than 5 


#include<iostream>
using namespace std;
int findFloor (int arr[], int n , int target) 
{
     
      int idx =-1;
   int start=0;
    int end = n-1;

     while (end>=start)
     {
      int mid= (start+end)*0.5;
      if(arr[mid]== target)
      {
         return mid;
      }
      else if(arr[mid]<target)
      {
         idx=mid;
          start=mid+1;
      }
      else{
         end = mid-1;
      }
     }
      return idx;
      
} int main()
{
    int n ;
     cin>> n;
     int arr[n+1];
      for (int i = 0; i < n; i++)
      {
        cin >> arr[i];
      }
       int target;
        cin>> target;

    cout<<   findFloor(arr,n,target);
      
 }