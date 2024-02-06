// Lets take example to understand this if the input string is : -"Prep insta" we need to capitalize first and last letter of each word of a string.The output here will be "PreP InstA"
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s = "Prep insta";
    vector<string> str;
    string need;
    for (auto elem : s)
    {
        if (elem == ' ')
        {
            str.push_back(need);
            need = "";
        }
        else
        {
            need += elem;
        }
    }
    str.push_back(need);
    string ans;
    for (auto &elem : str)
    {
        if (islower(elem[0]))
        {
            elem[0] = elem[0] + ('A' - 'a');
        }
        if (islower(elem[elem.size() - 1]))
        {
            elem[elem.size() - 1] = elem[elem.size() - 1] + ('A' - 'a');
        }

        ans += elem;
        ans += " ";
    }
    ans.pop_back();
    cout << ans << endl;
}