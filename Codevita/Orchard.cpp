#include <bits/stdc++.h>

using namespace std;

int countOccurrences(string strinput)
{
    int last = -1;

    int count = 0;
//   At each position i, the function checks if the next tree (character at index i+1) is different from the current tree (character at index i).
// If the next tree is different, it means a potential set of three trees can be formed, where the current tree is the second tree in the set. The first and third trees of the set can be any trees before and after the current position i respectively.
// So, (strinput.size() - i - 1) represents the number of trees after the current position i, and (i - last) represents the number of trees before the current position i since the last occurrence of a different tree. Multiplying these two values gives the count of possible sets that can be formed starting from the current position.
    for (int i = 0; i < strinput.size() - 1; i++)
    {
        if (strinput[i+1] != strinput[i])
        {
            count += (strinput.size() - i - 1) * (i - last);
            last = i;
        }
    }
cout<<count<<endl;
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




// Orchards are a piece of enclosed land planted with different fruit trees in an orderly manner. The owners will manage those trees and fulfill all the needs like pesticides, water,
// fertilizers for a better yielding.
// Ashok and Anand are friends. On a fine day they went to an orchard where lemon and mango trees are planted in rows. The owner planted these trees in rows but in random
// order. Some trees have plenty of fruits and some other plants didn't give good yield. While they are walking through the rows, both of them selected a row of trees. The trees
// in the row are represented by M and L which represents mango and lemon respectively. After selecting the rows, they both argued for sometime over the number of fruits.
// Then they saw Akhil walking towards them. They asked Akhil to declare which row holds more number of fruits. Akhil understood that guessing the row with maximum
// number of fruits will be quite difficult.
// So he asked to follow the below rules.
// • Each time one has to select three trees from the row and form a set out of them, such that no two adjacent trees in the set should be same.
// • Once a tree is selected, they cannot walk back and select another tree.
// • Trees need not to be adjacent for selection.
// • Who ever have the more number of possibilities will be considered as winners.
// Given two strings denoting the trees in the selected rows, find who is the winner. If the string is invalid, print "Invalid input" and if no one wins, print "Draw".

// - Constraints
// 1 <= len(str) <= 10^4

// - Input
// First line consists of the string denoting trees in Ashok's row.
// Second line consists of the string denoting trees in Anand's row.
// -Output
// Print the name of the winner in a single line.
// -Time Limit (secs)
// 1
// - Examples
// Example 1
// Input
// MMLMLLM
// LMLLLMLM
// Output
// Anand
// Explanation
// Ashok's possibilities are (1,3,4), (2,3,4), (3,4,6), (4,6,7), (1,3,7), (3,4,5), (1,5,7), (2,6,7), (2,3,7), (2,5,7), (4,6,7), (1,6,7) ie., 12 possibilities.
// Anand's possibilities are (2,3,6), (1,2,3), (1,6,7), (1,2,4), (3,6,7), (2,3,8), (1,2,5), (2,4,6), (4,6,7), (1,2,7), (2,4,8), (5,6,7), (2,5,6), (2,7,8), (2,5,8), (6,7,8) ie., 16 possibilities. Hence he
// wins.

// Example 2
// Input
// MLLM
// LMLL
// Output
// Draw
// Explanation
// Ashok's possibilities are (1,3,4), (1,2,4) ie., 2 possibilities.
// Anand's possibilities are (1,2,4), (1,2,3) ie., 2 possibilities.
// So no one wins and we print draw.

// https://www.youtube.com/watch?v=tOOPkdp2NsE