#include<iostream>
#include<string>
using namespace std;

 main(){
float x ,y;
string a;
cout<<"Enter The First Number"<<endl;

cin>>x;

cout<<"Select From Following Operators"<<endl<<"+ - x / % "<<endl;

cin>>a;

cout<<"Enter The Second Number"<<endl;

cin>>y;

if(a=="+"){
     cout<<"Answer Is  "<<x+y;
}
else if(a=="x"){
    cout<<"Answer Is  "<<x*y;
}
else if(a=="/"){
    cout<<"Answer Is  "<<x/y;
}
else if(a=="-"){
    cout<<"Answer Is  "<<x-y;
}
else if(a=="%"){
    cout<<"Answer Is  "<<(x/100)*y;
}
else if(a!="+"||a!="-"||a!="*"||a!="%"||a!="/"){
    cout<<"Please Choose A Valid Operator";
}

}