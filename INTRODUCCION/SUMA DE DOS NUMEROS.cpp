//PROGRAMA QUE SUMA DOS NUMEROS QUE EL USUARIO INTRODUCE//

#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using std::cin;

void suma(int a, int b);

int main(){
    int N1,N2;
cout<<"Introduzca el valor del primer operando"<<endl;
cin>>N1;
cout<<"Introduzca el valor del segundo operando"<<endl;
cin>>N2;
suma(N1,N2);
}

void suma(int a, int b){
int c=a+b;
cout<<"la suma es: "<<c<<endl;


}
