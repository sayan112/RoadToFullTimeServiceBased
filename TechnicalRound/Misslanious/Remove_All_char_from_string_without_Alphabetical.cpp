#include<iostream>
using namespace std;
 int main()
 {
   string str;
    cin >> str;
     int count =0;

     // with space 
      string need;
    for(auto elem :str)
    {
        if(isalpha(elem))
        {
             need+=elem;

        }
        count++;
    }
    cout << need<<endl;
    // without space
     int j =0; 
     for (int i = 0; i <str.size(); i++)
     {
        if(isalpha(str[i]))
        {
            str[j]=str[i];
            j++;
        }
     }
     cout << str << endl;
     str.resize(j);
     cout << str<<endl;

 }