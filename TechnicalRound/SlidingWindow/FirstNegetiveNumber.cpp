// #include<bits/stdc++.h>
// using namespace std;
// vector<int> First_negative_integer_in_every_window_of_size_k(vector<int>vec,int k )
// {
//      vector<int>ans;

//     for(int i=0;i<vec.size();i++)
//     {
//          int negetive=0;
//         for (int j = i; j <i+k; j++)
//         {
//             if(vec[j]<0)
//             {
//                 negetive = vec[j];
//                 break;
//             }
//         }

//         ans.push_back(negetive);
        
//     }
//     return ans;

// }

//  int main()
// {
//     int n;
//     cin >> n;
//     vector<int> vec;
//     for (int i = 0; i < n; i++)

//     {
//         int need;
//         cin >> need;
//         vec.push_back(need);
//     }
//     int k;
//     cin >> k;
//     vector<int> ans = First_negative_integer_in_every_window_of_size_k(vec, k);
//      for(auto elem : ans)
//      {
//          cout << elem <<" ";
//      }
//  }

#include <bits/stdc++.h>
using namespace std;
vector<int> First_negative_integer_in_every_window_of_size_k(vector<int> vec, int k)
{
    int i=0;
     int j =0;
     list<int>negetiveelems;
      vector<int>ans;
      while(j<vec.size())
      {
         if(vec[j]<0)
         {
             negetiveelems.push_back(vec[j]);
         }
        if(j-i+1<k)
        {
            j++;

        }
        else if(j-i+1==k){
           if(negetiveelems.size()==0)
           {
            ans.push_back(0);
           }
           else{
            ans.push_back(negetiveelems.front());

            if (vec[i] < 0)
            {
                negetiveelems.pop_front();
            }
           }
          
           i++;
           j++;
        }
      }
       return ans;
}

int main()
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
    int k;
    cin >> k;
    vector<int> ans = First_negative_integer_in_every_window_of_size_k(vec, k);
    for (auto elem : ans)
    {
        cout << elem << " ";
    }
}