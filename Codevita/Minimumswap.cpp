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

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int minSwaps(vector<int> &arr)
// {
//     int ascSwaps = 0, descSwaps = 0;
//     vector<int> sortedArrAsc = arr, sortedArrDesc = arr;

//     sort(sortedArrAsc.begin(), sortedArrAsc.end());
//     sortedArrDesc = sortedArrAsc;
//     reverse(sortedArrDesc.begin(), sortedArrDesc.end());

//     for (int i = 0; i < arr.size(); ++i)
//     {
//         if (arr[i] != sortedArrAsc[i])
//             ascSwaps++;
//         if (arr[i] != sortedArrDesc[i])
//             descSwaps++;
//     }

//     return min(ascSwaps, descSwaps);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> arr[i];
//     }

//     cout << minSwaps(arr) << endl;

//     return 0;
// }

// Problem Description
// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. The problem with bubble sort is its worst case scenario. When the smallest element is in the last position, then it takes more time to sort in ascending order, but takes less time to sort in descending order.

// An array is called beautiful if all the elements of the array are in either ascending or descending order. Given an array of numbers, find the minimum swap operations required to make the array beautiful.

// Constraints
// 0 < N < 1000

// 0 < Arr[i] < 1000

// Input
// First line contains of integer N denoting number of elements in the array.

// Second line consist of N integers separated by space denoting the elements of the array.

// Output
// Single integer denoting the least numbers of swap operations required to make the array beautiful.

// Time Limit (secs)
// 1

// Examples
// Example 1

// Input

// 5

// 4 5 3 2 1

// Output

// 1

// Explanation

// The number of swaps required to sort the elements in ascending order is 9.

// The number of swaps required to sort the elements in descending order is 1.

// The best way is to sort in descending order and swaps required is 1.

// Example 2

// Input

// 5

// 4 5 1 2 3

// Output

// 4

// Explanation

// Ascending order:

// Pass/Index

// a

// b

// c

// d

// e

// Comparison

// Need swap

// Swap count

// Pass 1

// 4

// 5

// 1

// 2

// 3

// a b

// No

// 0

// 4

// 5

// 1

// 2

// 3

// b c

// Yes

// 1

// 4

// 1

// 5

// 2

// 3

// c d

// Yes

// 2

// 4

// 1

// 2

// 5

// 3

// d e

// Yes

// 3

// Pass 2

// 4

// 1

// 2

// 3

// 5

// a b

// Yes

// 4

// 1

// 4

// 2

// 3

// 5

// b c

// Yes

// 5

// 1

// 2

// 4

// 3

// 5

// c d

// Yes

// 6

// 1

// 2

// 3

// 4

// 5

// d e

// No

// 6

// Descending order:

// Pass/index

// a

// b

// c

// d

// e

// Comparison

// Need swap

// Swap count

// Pass 1

// 4

// 5

// 1

// 2

// 3

// a b

// Yes

// 1

// 5

// 4

// 1

// 2

// 3

// b c

// No

// 1

// 5

// 4

// 1

// 2

// 3

// c d

// Yes

// 2

// 5

// 4

// 2

// 1

// 3

// d e

// Yes

// 3

// Pass 2

// 5

// 4

// 2

// 3

// 1

// a b

// No

// 3

// 5

// 4

// 2

// 3

// 1

// b c

// No

// 3

// 5

// 4

// 2

// 3

// 1

// c d

// yes

// 4

// 5

// 4

// 3

// 2

// 1

// d e

// No

// 4

// The number of swaps required to sort the elements in ascending order is 6.

// The number of swaps required to sort the elements in descending order is 4.

// The best way is to sort in descending order and swaps required is 4. in c++