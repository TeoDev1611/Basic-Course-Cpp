#include<iostream>

using namespace std;


int main() {

    float a,b,c,d,e,f,resultado = 0;

    cout << "Digite el valor de A: "; cin >> a;
    cout << "Digite el valor de B: "; cin >> b;
    cout << "Digite el valor de C: "; cin >> c;
    cout << "Digite el valor de D: "; cin >> d;
    cout << "Digite el valor de E: "; cin >> e;
    cout << "Digite el valor de F: "; cin >> f;

    resultado = (a+(b/c))/(d+(e/f)) ;

    cout.precision(3);
    cout <<"\nEl resultado de la expresion es: "<<resultado<<endl;

    return 0;
}