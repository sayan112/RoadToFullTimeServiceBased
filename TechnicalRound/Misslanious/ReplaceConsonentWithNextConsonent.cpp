#include <bits./stdc++.h>
using namespace std;
int main()
{
    string need;
    cin >> need;
    for (auto &elem : need)
    {
       
        if (elem != 'a' && elem != 'e' && elem != 'i' && elem != 'o' && elem != 'u')
        {
            elem=char(int(elem) + 1);
        }
    }
    cout << need << endl;
}
