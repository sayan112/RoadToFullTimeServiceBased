#include <bits./stdc++.h>
using namespace std;
int main()
{
    string need;
    cin >> need;
    for (auto &elem : need)
    {

         if(elem>'a'&&elem<'e')
         {
             if(abs(elem-'a')>=abs(elem-'e'))
             {
                elem='e';
             }
             else{
                elem='a';
             }
         }
       else  if (elem > 'e' && elem < 'i')
         {
             if (abs(elem - 'e') > abs(elem - 'i'))
             {
                elem = 'i';
             }
             else
             {
                elem = 'e';
             }
         }
       else  if (elem > 'i' & elem < 'o') 
         {
             if (abs(elem - 'i') > abs(elem - 'o'))
             {
                elem = 'o';
             }
             else
             {
                elem = 'i';
             }
         }
         else if (elem > 'o' && elem < 'u')
         {
             if (abs(elem - 'o') > abs(elem - 'u'))
             {
                elem = 'u';
             }
             else
             {
                elem = 'o';
             }
         }
         else if(elem>='u')
         {
            elem='u';
         }
        
    }
    cout << need << endl;
}
