#include<iostream>

using namespace std;

int main(){

    float a,b,resultado = 0;
    
    cout << "\nDIGITA EL VALOR DE A: "; cin >>a;
    cout << "\nDIGITA EL VALOR DE B: "; cin >>b;

    resultado = (a/b) + 1;

    cout.precision(2);
    cout<< "\nEl resultado es : " <<resultado;

    return 0;
}