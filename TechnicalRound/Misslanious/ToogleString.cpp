#include<bits/stdc++.h>
using namespace std;
 int main ()
 {
     string str;
      cin >> str;
    for(auto &elem : str)
    { 
         if(islower(elem))
         {
            elem=(elem+('A'-'a'));
           
         }
         else if(isupper(elem)){  
           elem=elem-('A'-'a');
           
         }
         
    }
     cout<<str<<endl;
 }