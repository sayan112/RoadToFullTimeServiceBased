#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

        int n;
        cin >> n;
        string need = to_string(n);
        // cout << need;
        for (int i = 0; i < need.size(); i++)
        {
            if (need[i] == '0')
            {
                need[i] = '1';
            }
        }
            int ans = stoi(need);
             cout << ans << endl;
}
