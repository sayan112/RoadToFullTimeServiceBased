#include<bits./stdc++.h>
using namespace std;
int FindFirstocuurence(int target, vector<int> vec)
{
int start =0;
 int end =vec.size()-1;
  int firstIdx=-1;
  while(end>=start)
  {
    int mid=(start+end)/2;
     if(target==vec[mid])
     {
       firstIdx=mid;
       end = mid - 1;
     }
     else if(target>vec[mid])
     {
  start=mid+1;
     }
     else{
      end=mid-1;
     }
  }
   return firstIdx;
 }
 int FindLastocuurence(int target, vector<int> vec)
 {
   int start = 0;
   int end = vec.size() - 1;
   int lastIdx = -1;
   while (end >=start)
   {
     int mid = (start + end) / 2;
     if (target == vec[mid])
     {
      lastIdx = mid;
      start = mid + 1;
     }
     else if (target > vec[mid])
     {
      start = mid + 1;
     }
     else
     {
      end = mid - 1;
     }
   }
   return lastIdx;
 }
 int findThenumberofOccurences(int target, vector<int> vec)
 {
   int Firstocuurence = FindFirstocuurence( target,vec);
   int Lastocuurence = FindLastocuurence(target, vec);
  //  cout << Firstocuurence << " " << Lastocuurence;
    return (Lastocuurence - Firstocuurence)+1;
}
 int main()
{
  int n;
  cin >> n; 
  vector<int>vec;
   for (int i = 0; i < n ; i++)
   {
    int need;
     cin>> need;
      vec.push_back(need);
   }
   int target;
   cin>>target;
 cout <<   findThenumberofOccurences(target,vec);
 }