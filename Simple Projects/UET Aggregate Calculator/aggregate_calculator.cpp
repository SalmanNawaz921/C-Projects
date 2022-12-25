#include<iostream>

using namespace std;

main(){

      cout<<"                  ---------------------------------              "<<endl;
      cout<<"                            AGGREGATE                            "<<endl;
      cout<<"                            CALCULATOR                           "<<endl;
      cout<<"                              2022                               "<<endl;
      cout<<"                  ---------------------------------              "<<endl;
 string name;
 float inter,ecat;
 float interPer,ecatPer;
 float aggregate;

     cout<<"                         Enter Your Name: ";
     cin>>name;

     cout<<"            Enter Your Intermediate Marks(out of 1100):  ";
     cin>>inter;

    cout<<"                 Enter Your ECAT Marks(out of 400):  ";
    cin>>ecat; 
  

   interPer=((inter/1100)*80);
   ecatPer=((ecat/400)*20);

   aggregate=interPer+ecatPer;

    cout<<endl<<"                         Aggregate Of "<<name<<" is "<<aggregate<<endl;

}  

   
  
