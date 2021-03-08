#include<iostream>

using namespace std;

int main(){

    float nota1, nota2, nota3,nota4, resultado = 0;

    cout<<"DIGITA LA NOTA DEL ALUMNO 1: ";cin >> nota1;
    cout<<"DIGITA LA NOTA DEL ALUMNO 2: ";cin >> nota2;
    cout<<"DIGITA LA NOTA DEL ALUMNO 3: ";cin >> nota3;
    cout<<"DIGITA LA NOTA DEL ALUMNO 4: ";cin >> nota4;

    resultado = (nota1+nota2+nota3+nota4)/4;

    cout.precision(3);
    cout<<"\nLa media de los alumnos es: "<<resultado<<endl;



    return 0;
}