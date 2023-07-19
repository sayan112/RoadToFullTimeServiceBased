#include<bits./stdc++.h>
using namespace std;
 int partition( int arr [], int start, int end)

 {
     int pivot = arr[start];
      int count =0;
      // staring with start+1 bcz start elem is the pivot only
      for (int i = start+1; i <=end; i++)
      {
        // finding in the whole array which elems are less than the pivot
         if(arr[i] <= pivot)
         {
            count++;
         }
      }
      int pivotIndex = start+count;
      swap(arr[pivotIndex],arr[start]);
       int i=start;
       int j = end;
       while(i<pivotIndex && j>pivotIndex)
       {
        while(arr[i]<=pivot)
        {
i++;
        }
        while (arr[j] > pivot)
        {
j++;
        }
         if(i<pivotIndex && j>pivotIndex)
         {
            swap(arr[i++],arr[j--]);
         }
       }
        return pivotIndex;

 }
void quickSort(int arr[], int start, int end)
{
    if(start>=end)
    {
        return ;
    }
    // partition
     int p= partition(arr,start,end);// ek case solve ho gaya , 
     quickSort(arr,start,p-1); // baki kaam recursion kar lega 
     quickSort(arr, p+1,end);
}

 int main()
{
    int size;
    cin >> size;
    int arr[size];
 for (int i = 0; i < size; i++)
 {
    int need;
     cin >> need;
      arr[i] = need;

 }
  quickSort(arr, 0, size - 1);
   for (int i = 0; i < size; i++ )
   {
    cout << arr[i] << endl;
   }
   
 }