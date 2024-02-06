  #include <bits/stdc++.h>
  using namespace std;
  string replaceSubstring(string originalString, string targetSubstring, string replacementSubstring)
  {
    for (int  i = 0; i < originalString.size(); i++)
    {
       if(originalString[i] == targetSubstring[0])
       {
          int idx=i;

          if (originalString.substr(idx, targetSubstring.size()) == targetSubstring)
          {
            originalString.replace(idx, targetSubstring.size(), replacementSubstring);
            return originalString;
           }
       }


    }
 
 
  }

   int main ()
   {

 string originalString ;
  string targetSubstring ;
  string replacementSubstring;

  cin >> originalString >> targetSubstring >> replacementSubstring;
 cout <<  replaceSubstring(originalString, targetSubstring, replacementSubstring);
   }

