//                            ******** This ***********
//this pointer holds the address of the current object.In simple words, you can say that this pointer points to the current object of the class.
 #include <bits/stdc++.h>
  using namespace std;
  class car
  {
  private:
   int weight;
   string model;

    /* data */
  public:
    car (int weight, string model)
    {
this->weight = weight;   
 this->model = model;
    }
     void getvalues()
     {
        cout <<weight<<endl;
         cout << model<<endl;
     }
  };


//    int main ()
//    {
//      car landrover(3000,"lan001");
//       car sedun(2000,"sedun2021");
//        landrover.getvalues();
       
//    }




// another examle of this 

 #include<bits/stdc++.h>
  using namespace std;
   class mobile{
    private:
    string model ;
     string details;
     int year_of_manufacture; 
      public:
      void setdetails (  string model , string details , int year_of_manufacture)
      {
         this->model=model;
        this->details = details;
        this->year_of_manufacture = year_of_manufacture;
      }
       void getdetails()
       {
         cout << model<< " "<< details<<" "<< year_of_manufacture<< endl;
       }
   };

   int main  ()
   {
    mobile pocom2;
    pocom2.setdetails("pocom2(m002)","flagship,20mp front camera , 30 mp back camera", 2020);
     pocom2.getdetails();
       }