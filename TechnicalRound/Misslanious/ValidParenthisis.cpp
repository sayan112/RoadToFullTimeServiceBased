#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (auto elem : s)
    {
        if (elem == '[' || elem == '{' || elem == '(')
        {
            st.push(elem);
        }
        else
        {

            if (st.empty())
            {
                return false;
            }
            else
            {
                auto lastOpenBracket = st.top();
                st.pop();
                if ((lastOpenBracket == '[' && elem == ']') || (lastOpenBracket == '{' && elem == '}') || (lastOpenBracket == '(' && elem == ')'))
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{

    string s;
    cin >> s;
    if (isValid(s))
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Non Valid" << endl;
    }
}