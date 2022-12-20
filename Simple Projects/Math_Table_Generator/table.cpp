#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main (){
   int a;
   
   cout<<"Enter The Number For Generating It Table: "<<endl;
//"cin" is used to take input from user
   cin>>a;


    int i=1;
//Here we use "char" datatype and using ASCII-code here 120 means "x"
    char c= 120;

    while(i<=10){

    //Firstly,we have printed a integer which we have taken from user and then,c which stores "x" and then,"i" which is that number from which a is being multiplied and lastly,using operator "*" we print tha table

    cout<<a<<c<<i<<"="<<setw(2)<<a*i<<endl;
        i++;
    }
    return 0;

}