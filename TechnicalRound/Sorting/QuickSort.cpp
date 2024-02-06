/*
class Solution
{
    public:
        int partiion(vector<int> &nums, int low, int high)
        {
            int pivot = nums[low];
            int i = low;
            int j = high;
            while (i < j)
            {
                // find the first greater elem than pivot
                while (pivot >= nums[i] && i < high )
                {
                    i++;
                }
                   // find the first smaller  elem than pivot
                while (pivot < nums[j] && j > low )
                {
                    j--;
                }

                if (i < j)
                {
                    swap(nums[i], nums[j]);
                }
            }
            swap(nums[low], nums[j]);
            return j;
        }
    void quicksort(vector<int> &nums, int low, int high)
    {
        if (low >= high)
        {
            return;
        }
        int pivot = partiion(nums, low, high);
        quicksort(nums, low, pivot - 1);
        quicksort(nums, pivot + 1, high);
    }
    vector<int> sortArray(vector<int> &nums)
    {

        quicksort(nums, 0, nums.size() - 1);
        return nums;
    }
};
*/

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
      int pivotIndex = start+count; // making the right pivot position
      swap(arr[pivotIndex],arr[start]);// swap it 
       int i=start;
       int j = end;
       while(i<pivotIndex && j>pivotIndex)
       {
        while(arr[i]<=pivot)
        {
i++;
        }
        while (arr[j] >pivot)
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

 // Best-case: O(n log n) - Occurs when the pivot chosen always splits the array into two nearly equal halves.
 //Worst - case: O(n ^ 2) - This happens when the pivot is chosen poorly, resulting in an unbalanced partition.
//  Average - case:O(n log n).