#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using std::cin;

int max(int a, int b);
 int main(){
   int N1,N2,N3;
cout<<"Introduzca el valor del primer numero"<<endl;
cin>>N1;
cout<<"Introduzca el valor del segundo numero"<<endl;
cin>>N2;
cout<<"Introduzca el valor del tercer numero"<<endl;
cin>>N3;
int max1=max(N1,N2);
int max2=max(max1,N3);
cout<<"el numero mayor es: "<<max2<<endl;
return 0;
 }
 int max(int a, int b){
 int c;
 if(a>b){c=a;}
 else {c=b;}
 return c;

 }


