#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    string str;
     cin>>str;
      int idx =0;
      for(auto elem:str)
      {
        if(isdigit(elem))
        {
            str[idx]=elem;
            idx++;
        }
      }
       str.resize(idx);
      cout << str<<endl; 
 }