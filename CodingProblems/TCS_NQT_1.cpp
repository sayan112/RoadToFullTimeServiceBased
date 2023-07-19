// Problem Statement – An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). A company manager wants to make the production of both types of vehicle according to the given data below:

// 1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
// 2nd data, Total number of wheels = W
// The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the given data.
// Example :

// Input :
// 200  -> Value of V
// 540   -> Value of W

// Output :
// TW =130 FW=70

// Explanation:
// 130+70 = 200 vehicles
// (70*4)+(130*2)= 540 wheels

// Constraints :

// 2<=W
// W%2=0
// V<W
// Print “INVALID INPUT” , if inputs did not meet the constraints.

// The input format for testing 
// The candidate has to write the code to accept two positive numbers separated by a new line.

// First Input line – Accept value of V.
// Second Input line- Accept value for W.
// The output format for testing 

// Written program code should generate two outputs, each separated by a single space character(see the example)
// Additional messages in the output will result in the failure of test case




//  x+y = 200= V
//   x*4+y*2=540=w

//  4x+2y=540
//  2x+2y=400
//x=(w-v)/2
//  x=70


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v, w;
    cin >> v >> w;
    if (w < 2 || w % 2 != 0 || v > w)
    {
        cout << "INVALID INPUT" << endl;
    }
    else
    {
        int FW = (w - 2 * v) / 2;
        int TW = v - (FW);
        cout << TW << " " << FW << endl;
    }
  }
