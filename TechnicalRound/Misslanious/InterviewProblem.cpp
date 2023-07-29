#include <bits/stdc++.h>
using namespace std;
string replace_the_target(string str, string target, string replace)
{
    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] == target[0])
        {
            if (str.substr(i, target.size())==target)
            {
                 str.replace(i,replace.size(),replace);
            }

        }
    }
     cout << str;
     return "";
}
    int main()
    {
        string str="Today Apple will eat Apple";
        string target;
        cin >> target;
        string replace;
        cin >> replace;
        replace_the_target(str, target, replace);
        // out put -> Today I will eat Mango return 0; 
        }