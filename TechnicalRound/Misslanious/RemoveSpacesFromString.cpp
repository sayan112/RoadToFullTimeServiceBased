#include <bits./stdc++.h>
using namespace std;
int main()
{
    string need=" s  a   y            a          n";
      int j=0;
      for (int  i = 0; i < need.size(); i++)
      {
        if(need[i]!=' ')
        {
            need[j]=need[i];
            j++;
        }
    
      }
        need.resize(j);
      cout << need << endl;
}