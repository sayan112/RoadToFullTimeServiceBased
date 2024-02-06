// Ankitha enjoys finding new games. One day, she found a grid with dimensions M*N and decided to make up a special game to play on it. When Ankitha came up with the idea for the new game, her friend Akhil joined her. She then decided to share and explain the game to him.

// Akhil is given a grid with dimensions M*N, where each cell contains either 0 or 1. Additionally, he is provided with the coordinates of source and destination cells.You can only move to places whose value is 0. Furthermore, he is given the move rule (x, y) which helps in finding the location for the next move. From the given cell, you can move in four directions (forward, back,right ,left), unless they are out of grid. The rules for finding the next move from a current cell are given below.

// For moving forward, add the move rule to the current cell.
// For moving right, from current position add the move rule, rotate the path 90 degree clockwise,
// For moving left, from current position add the move rule, rotate the path 90 degree anticlockwise direction,
// For moving backward, from current position add the move rule, rotate the path 180 degree in clock or anti clockwise.
// The rules can be understood better from the following example. Let the current cell be (1,1) and the move rule as (1,2)

// com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@efde75f:image1.png

// on forward the next cell would be (2,3) ,
// on right the next cell would be (3,0),
// left (-1,2) and back (0,-1) are out of grid.

// Obeying the given move rule, find out minimum how many cells he need to travel in order to reach the destination.

// Constraints
// 4 <= M, N <= 50

// Input
// First line consist of two space separated integers M and N denoting the number of rows and columns in the grid.

// Next M lines consists of N space separated integers representing the grid.

// Next line consists of two space separeted integers denoting source cell.

// Next line consists of two space separated integers denoting destination cell.

// Last line consists of two space separated integer representing move rule.

// Output
// Print a single integer denoting the minimum moves required to reach the destination.

// Time Limit (secs)
// 1

// Examples
// Example 1

// Input

// 6 6

// 0 1 0 0 0 0

// 0 0 0 0 0 1

// 0 1 0 0 0 0

// 1 1 0 0 0 1

// 0 0 0 0 0 0

// 1 1 0 0 1 0

// 1 0

// 5 3

// 1 2

// Output

// 3

// Explanation

// Akhil needs to move from (1, 0) to (5, 3) and the given step for next move is (1, 2).

// In order to minimise the number of moves, he follows the path (1,0) -> (2,2) -> (3,4) ->(5,3) where in total he made 3 moves. No other paths will give moves less than 3. Hence print 3 as the output.

// Example 2

// input

// 6 6

// 0 0 0 0 1 0

// 0 0 1 0 0 1

// 0 1 0 1 0 0

// 1 1 1 0 0 0

// 1 0 0 0 0 1

// 1 0 0 1 1 0

// 0 0

// 4 4

// 0 2

// Output

// 4

// Explanation

// Akhil needs to move from (0, 0) to (4, 4) and the given step for next move is (0, 2).

// In order to minimise the number of moves, he follows the path (0,0) -> (0,2) -> (2,2) -> (2,4) -> (4,4) where in total he made 4 moves. No other paths will give moves less than 4. Hence print 4 as th output. read the question and statements carefully and implement c++ code (use bits./stdc++ and using namespace)

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
struct MovePattern
{
    int dx, dy;
};

struct Coordinate
{
    int row, col;
};

int32_t main()
{
    fast

        int t = 1;
    while (t--)
    {
        int numRows, numCols;
        cin >> numRows >> numCols;

        vector<vector<int>> field(numRows, vector<int>(numCols));
        for (int i = 0; i < numRows; ++i)
        {
            for (int j = 0; j < numCols; ++j)
            {
                cin >> field[i][j];
            }
        }

        Coordinate startPoint, endPoint;
        MovePattern moveStyle;

        cin >> startPoint.row >> startPoint.col;
        cin >> endPoint.row >> endPoint.col;
        cin >> moveStyle.dx >> moveStyle.dy;

        vector<vector<int>> stepCount(numRows, vector<int>(numCols, INT_MAX));
        stepCount[startPoint.row][startPoint.col] = 0;

        queue<Coordinate> Qpoints;
        Qpoints.push(startPoint);

        while (Qpoints.size())
        {
            Coordinate current = Qpoints.front();
            Qpoints.pop();

            vector<Coordinate> moves = {
                {current.row + moveStyle.dx, current.col + moveStyle.dy},
                {current.row - moveStyle.dy, current.col + moveStyle.dx},
                {current.row + moveStyle.dy, current.col - moveStyle.dx},
                {current.row - moveStyle.dx, current.col - moveStyle.dy}};

            for (auto &next : moves)
            {
                int need1 = next.row;
                int need2 = next.col;

                if ((need2 >= 0 && need2 < numCols) && (need1 >= 0 && need1 < numRows) && field[need1][need2] == 0)
                {
                    if (stepCount[current.row][current.col] + 1 < stepCount[need1][need2])
                    {
                        stepCount[need1][need2] = stepCount[current.row][current.col];
                        stepCount[need1][need2]++;
                         Qpoints.push({need1, need2});
                    }
                }
            }
        }

        cout << stepCount[endPoint.row][endPoint.col] << endl;
    }
    return 0;
}
