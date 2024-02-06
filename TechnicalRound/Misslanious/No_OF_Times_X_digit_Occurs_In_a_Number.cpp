#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int need;
     cin >> need;
      int x;
       cin >> x;
        
      string str=to_string(need);
       int count=0;
    for(auto elem : str)
    {
        if(elem==(x+'0'))
        {
            count++;
        }
    }
    cout <<  count<<endl;
 }