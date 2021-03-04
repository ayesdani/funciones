//Crear un programa que indique que numero es mayor //
#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using std::cin;

void max(int a, int b);
 int main(){
   int N1,N2;
cout<<"Introduzca el valor del primer numero"<<endl;
cin>>N1;
cout<<"Introduzca el valor del segundo numero"<<endl;
cin>>N2;
max(N1,N2);
 }
 void max(int a, int b){
 if (a>b){
    cout<< "Es mayor: "<<a<<endl;
 }
 else if (a<b){
    cout<< "Es mayor: "<<b<<endl;

 }
 else{
    cout<<"ERROR"<<endl;
 }
 }
