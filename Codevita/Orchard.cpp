#include <bits/stdc++.h>

using namespace std;

int countOccurrences(string strinput)
{
    int last = -1;

    int count = 0;
  
    for (int i = 0; i < strinput.size() - 1; i++)
    {
        if (strinput[i+1] != strinput[i])
        {
            count += (strinput.size() - i - 1) * (i - last);
            last = i;
        }
    }

    return count;
}



int main()
{
    string ashokestrinput;
     string  anandstrinput;

    cin >> ashokestrinput;
    cin >> anandstrinput;

    if (anandstrinput.find_first_not_of("ML") != string::npos )
    {
        cout << "Invalid input";
    }
    if (ashokestrinput.find_first_not_of("ML") != string::npos)
    {
        cout << "Invalid input";
    }
        else
        {
            int ashokCount = countOccurrences(ashokestrinput);
            int anandCount = countOccurrences(anandstrinput);

            if (ashokCount < anandCount)
            {
                cout << "Anand";
            }
            else if (anandCount < ashokCount)
            {

                cout << "Ashok";
            }
            else
            {
                cout << "Draw";
            }
        }

    return 0;
}
