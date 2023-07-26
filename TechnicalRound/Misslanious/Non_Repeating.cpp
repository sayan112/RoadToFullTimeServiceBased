#include<bits/stdc++.h>
using namespace std;
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
 int main ()
 {
    string a ;
     cin>>a;
      nonrepeating(a);
 }