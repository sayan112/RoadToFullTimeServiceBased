#include<bits/stdc++.h>
using namespace std;
void printPatternOne (int row , int col)
{

   for (int i = 1; i <=row; i++)
   {
       for (int i = 1; i <= col; i++)
       {
         cout << "*"<<" ";
       }
        cout <<endl;
   }
   
// * * * * 
// * * * * 
// * * * * 
// * * * *
}

void printPatternTwo(int row, int col)
{

   for (int i = 1; i <= row; i++)
   {
        for (int j = 1; j <= i; j++)
        {
         cout << "*"
              << " ";
        }
        cout << endl;
   }
// * 
// * * 
// * * * 
// * * * *
}

void printPatternThree(int row, int col)
{

   for (int i = 1; i <= row; i++)
   {
        for (int j = 1; j <= col-i+1; j++)
        {
         cout << "*"
              << " ";
        }
        cout << endl;
   }


// * * * * 
// * * * 
// * * 
// *
}
 void printPatterFive ( int row , int col)
 {
     int count =0;
   for (int i = 1; i <= row; i++)
   {
     count++;
    //   cout << count<<" "<< row/2<<endl;
      if(count<=row/2)
      {
         for (int j = 1; j <=i; j++)
         {
             cout << "*"
                  << " ";
         }
         cout << endl;
      }
      else{
         int need = i-(row/2);
         for (int j = 1; j <= col - need + 1; j++)
         {
             cout << "*"
                  << " ";
         }
         cout << endl;
      }

     
   }
 }

 void printPatterSix(int n)
 {
   // Iterate through each row
   for (int i = 1; i <= n; i++)
   {
      // Print the numbers in ascending order
      for (int j = 1; j <= i; j++)
      {
         std::cout << j;
      }

      // Print the numbers in descending order
      for (int j = i - 1; j >= 1; j--)
      {
         std::cout << j;
      }

      std::cout << std::endl;
   }

   // Print the numbers in reverse order
   for (int i = n - 1; i >= 1; i--)
   {
      // Print the numbers in ascending order
      for (int j = 1; j <= i; j++)
      {
         std::cout << j;
      }

      // Print the numbers in descending order
      for (int j = i - 1; j >= 1; j--)
      {
         std::cout << j;
      }

      std::cout << std::endl;
   }
 }

 void printPatternSix (int n)
 {
   for (int i = 1; i <= n; i++)
   {
    int noofSpaces= n-i;
    for (int j = 1; j <= noofSpaces; j++)
    {
         cout << " ";
      }
      for (int j = 0; j <i ; j++)
      {
         cout << "*";
      }
      for (int j = 1; j <= noofSpaces; j++)
      {
         cout << " ";
      }
       cout<<endl;
     }
     
   
 }

 void printPattern(int n)
 {
     // Iterate through each row
     for (int i = 1; i <= n; i++)
     {
       for (int j = 1; j <= n - i; j++)
       {
         std::cout << " ";
       }

       // Print the stars
       for (int k = 1; k <= (2 * i) - 1; k++)
       {
         std::cout << "*";
       }

       std::cout << std::endl;
     }
 }

  int main()
 {

   // printPatternOne(4, 4);
   // printPatternTwo(4, 4);
   // printPatternThree(4, 4);
   //  printPatterFive(8,4);
   //  printPatterSix(4);
     printPattern(8);
 }


