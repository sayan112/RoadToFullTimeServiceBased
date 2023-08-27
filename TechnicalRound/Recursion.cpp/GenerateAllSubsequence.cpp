#include <bits/stdc++.h> 
using namespace std;
 void generateAllSubsequences ( int idx , string &str , string &need , vector<string>&ans)
 {
    if(idx==str.size())
	{

		 ans.push_back(need);  
		 return ;
	}
	need+=str[idx];
	 generateAllSubsequences(idx+1,str,need,ans);
  need.pop_back();
	 generateAllSubsequences(idx+1,str,need,ans);
 }
vector<string> subsequences(string str){

int idx =0;
 vector<string>ans;
 string need ;

  
	generateAllSubsequences(idx,str,need,ans);
	 return ans ;
}

int main ()
{
     string str;
      cin>> str;
     vector<string> ans = subsequences(str);
      for(auto elem : ans)
    {
        cout << elem <<" ";
    }
}

// time comeplxity 2^n 
 // space comlexity o(n)