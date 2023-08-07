// square of the number end with itself 
 #include<bits/stdc++.h>
 using namespace std;
  int main ()
  {
     int n;
     cin>>n;
      int squareOfnum= n*n;
       string need = to_string(squareOfnum);
        cout << need << endl;
        int sizeneed=need.size()-1;
        while (n)
        {
          int remainder=n%10;
           n=n/10;
           if ((need[sizeneed]-'0') != remainder)
           {
      cout <<"false";
       return 0;
           }
           else{
      sizeneed--;

           }
        }
         cout << " true"<<endl;
        

  }