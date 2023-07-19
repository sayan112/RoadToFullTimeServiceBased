#include<bits./stdc++.h>
using namespace std;
int FindNoOfTimeSorted(vector<int> vec)
{
     int N = vec.size();
int start = 0;
int end = vec.size()-1;
while(start <=end)
{
    int mid=(start+end)/2;
    if (vec[mid] <= vec[(mid + 1) % N] && vec[mid] <= vec[(mid+N - 1)%N])
    {
        return mid;
     } 
     else if(vec[start]<=vec[mid])
     {
        // matlab mid zyada hein , so its sorted, so we have to find the unsorted part , so shift your start mid+1
        start=mid+1;
     }
     else{
        end=mid-1;
     }

}
return -1;



} int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int need;
        cin >> need;
        vec.push_back(need);
    }
   cout<<  FindNoOfTimeSorted(vec);
 }