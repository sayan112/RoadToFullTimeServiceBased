#include <bits/stdc++.h>
using namespace std;
int main()
{
    int range_start;
    cin >> range_start;
    int range_end;
    cin >> range_end;
    vector<int> ans;
    for (int i = range_start; i <= range_end; i++)
    {
        int digit = i;
        int temp = 0;
        while (digit)
        {
            int remiander = digit % 10;

            temp += remiander * remiander * remiander;
            digit = digit / 10;
        }
        //  cout << i <<" "<<  temp<<endl; 
        if (temp == i)
        {
            ans.push_back(i);
        }
    }
    for (auto elem : ans)
    {
        cout<< elem <<" ";
    }
}