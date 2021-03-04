#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using std::cin;

int factorial(int a);
int main(){

int N1;
cout<<"introduzca el valor del numero"<<endl;
cin>>N1;
int fac=factorial(N1);
cout<<"el factorial es: "<<fac<<endl;
}
int factorial(int a){

int i;
int resultado=1;
for(i=1;i<=a;i++){
    resultado*=i;
}
return resultado;

}
