#include <bits/stdc++.h>
using namespace std;
int var;
int ascendingSort(int vec[], int n)
{

    int count1 = 0;
    bool isswapped = false;
    for (int i = 0; i < n - 1; i++)
    {
        isswapped = false;
        for (int k = 0; k < n - i - 1; k++)
        {
            if (vec[k] > vec[k + 1])
            {
                var = vec[k];
                vec[k] = vec[k + 1];
                vec[k + 1] = var;
                count1++;
                isswapped = true;
            }
        }

        if (isswapped==false)
        {
            break;
        }
    }

    return count1;
}

int descendingSort(int vec[], int n)
{


    bool isswapped = false;
    int count2 = 0;
  
    for (int i = 0; i < n - 1; i++)
    {
        isswapped = false;
        for (int k = 0; k < n - i - 1; k++)
        {
            if (vec[k] < vec[k + 1])
            {
                var = vec[k];
                vec[k] = vec[k + 1];
                vec[k + 1] = var;
                count2++;
                isswapped = true;
            }
        }

        if (isswapped==false)
        {
            break;
        }
    }

    return count2;
}

int main()
{
    int n;
    cin >> n;
    int vec[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int vec2[n];
    copy(vec, vec + n, vec2);

    int count1 = ascendingSort(vec, n);
    int count2 = descendingSort(vec2, n);

    int minimumSwap= min(count1, count2);
    cout << minimumSwap << endl;

    return 0;
}
