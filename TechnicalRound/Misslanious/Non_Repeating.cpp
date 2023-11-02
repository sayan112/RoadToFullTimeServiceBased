#include<bits/stdc++.h>
using namespace std;

// abbbbas
//s 
 void nonrepeating ( string a )
 {
     string ans ;
      for (int i = 0; i <a.size(); i++)
      {
         int count =0;
          for (int j = 0; j < a.size(); j++)
          {
             if(i!=j)
             {
                if(a[i]==a[j])
                {
 count++;
                }
             }
          }
           if(count==0)
           {
ans+=a[i];
           }
      }
       if(a.size()==0)
       {
        cout <<"no character is repeating "<<endl;
       }
       else{
         cout << ans <<endl;
       }
      

 }
 void optimisedNonrepeating (string a)
 {
 unordered_map<char,int>mp;
  for(auto elem : a)
  {
   mp[elem]++;
  }
   string ans ;

  for(auto elem : mp)
  {
   if(elem.second==1)
   {
ans+=elem.first;
   }
  }

string realans ;
   priority_queue<pair<int,char>>pq;
   for(int i=0;i<a.size();i++)
   {
   size_t found= ans.find(a[i]);
   if (found != std::string::npos)
{
   pq.push({i,a[i]});
}
   }

    while(pq.size() > 0)
    {
        auto elem = pq.top();
      realans+=elem.second;
         pq.pop();
    }   
 

 sort(ans.begin(), ans.end());
  cout <<  ans;

 }
  int main()
 {
    string a ;
     cin>>a;
      nonrepeating(a);
       optimisedNonrepeating(a);
 }