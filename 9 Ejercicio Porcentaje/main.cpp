#include<iostream>

using namespace std;

int main(){

    float practica, teorica,participacion,notaFinal = 0;

    cout<<"Digite la nota de prectica: ";cin>>practica;
    cout<<"Digita la nota teorica: ";cin>>teorica;
    cout<<"Digita la nota de participacion: ";cin>>participacion;


    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10;

    notaFinal = practica +teorica+participacion;

    cout<<"\nLa nota final es: "<<notaFinal<<endl;

    return 0;
}