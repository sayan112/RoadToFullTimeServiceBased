
// Write a C program to convert the vowels to an uppercase in a given string using command line arguments.Example : if the input is tata, then the expected output is tAtA.
#include<bits/stdc++.h>
using namespace std;
int main ()
{
     string need;
      cin >> need;
    for(auto &elem: need)
    {
        if (elem == 'a' || elem == 'e' || elem == 'i' || elem == 'o' || elem == 'u')
        {
            elem=toupper(elem);
            // elem= elem-'a'+'A'; //upper case
            // elem=elem-'A'+'a';//lower case
        }
    }
     cout << need<<endl;
}