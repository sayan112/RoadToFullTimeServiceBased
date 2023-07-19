#include<bits/stdc++.h>
using namespace std;
//  TC -> o(n)   Sc -> o(d)
void rotateByDplaces (int arr[] , int n , int D  )
{
     D = D%n;
     int temp[D];
      for (int i = 0; i < D; i++)
      {
         temp[i]=arr[i];
      }

  int start=0;
       for (int i = D; i < n; i++)
       {
         arr[start]=arr[i];
          start++;
       }
 

        for (int i = 0; i < D; i++)
        {
            arr[start]=temp[i];
             start++;
        }

        for (int i = 0; i < n; i++)
        {
             cout << arr[i] << " ";
        }
}

void rotateByDplacesOptimised(int arr[], int n)
{
        int D;
        cin >> D;
        // 1234567
        reverse(arr, arr + D);     // reverse first part  321 4567   //
        reverse(arr + D, arr + n); // reverse second part 321 7654 //
        reverse(arr, arr + n);     //
        for (int i = 0; i < n; i++)
        {
             cout << arr[i] << " ";
       }
}

double avgAllelem (int arr [], int n )
{

 double sum=0;
 for (int i = 0; i < n; i++)
 {
     sum+=arr[i];
 }
  double avg=(double)(sum/n);
 return avg;
}

double  medianArr (int arr[], int n)
{
     sort(arr,arr+n);
   if(n%2==0)
   {
     return double(arr[n/2]+arr[((n/2)+1)/2])/2;
   }
   else{
     return arr[n/2];
   }
}
void removeDuplicatesSorted (int arr[], int n)
{
 int check = arr[0];
  int count =1;
  for (int i = 1; i < n ; i++)
  {
     if(check!=arr[i])
     {
        check=arr[i];
        count++;
     }
  }
   cout << count;
  
}
void removeDuplicatesUnSorted ( int arr[], int n)
{
   unordered_map<int,int>mp;

   for (int i = 0; i < n; i++)
   {
        mp[arr[i]]++;
    }
    cout << mp.size() << endl;
    
}
void allrepeatingelems ( int *arr , int n)
{
   
     unordered_map<int,int>mp;
      for (int i = 0; i < n ; i++)
      {
        mp[arr[i]]++;
      }
       int count =0;
       for(auto elem : mp)
       {
       
         if(elem.second >=2)
         {
        count++;
         }
       }
        cout << count<<endl;
      
      

}

    int  main()
{
    int n;
    cin >> n;
    int arr[n];
     for (int i = 0; i < n ; i++)
     {
        int need;
         cin>>need;
          arr[i]=need ;
     }
     int length = sizeof(arr) / sizeof(arr[0]);
     // rotate by D places

     //   rotateByDplaces(arr,n,D);
     //   rotateByDplacesOptimised(arr, n);

     // Average of all the elements in the array

     //  cout<<avgAllelem(arr,n);

     // median of all the elements in the array

     // what is the median -> Median of an array represents the middle element present in an odd number sorted array and if the sorted array consists of even number, then median can be found out by calculating the average of middle two numbers

   //   cout << medianArr(arr,n);


   // remove duplicates from sorted array
  //  removeDuplicatesSorted(arr,n);

    // Remove Duplicates From an Unsorted Array
   // removeDuplicatesUnSorted(arr, n);

     // Find all repeating elements in an array
      allrepeatingelems(arr, length);
  }