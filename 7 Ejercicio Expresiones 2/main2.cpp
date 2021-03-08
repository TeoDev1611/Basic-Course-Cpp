#include<iostream>

using namespace std;

int main(){

    float a,b,c,d,resultado = 0;

    cout<<"Digita el valor de A: ";cin >>a;
    cout<<"Digita el valor de B: ";cin >>b;
    cout<<"Digita el valor de C: ";cin >>c;
    cout<<"Digita el valor de D: ";cin >>d;

    resultado = a + ((b)/(c-d)) ;


    cout.precision(3);
    cout<<"\nEl resultado de la expresion es: "<<resultado<<endl;

    return 0;
}
