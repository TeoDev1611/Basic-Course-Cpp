#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int numero,factorial = 1; //SIEMPRE QUE VAMOS A HACER UNA MULTIPLICACIÓN ITERATIVA 1 A LA VARIABLE QUE ALMACENA EL RESULTADO

    cout<<"Digite un numero: ";
    cin>>numero;

    for (int i = 1; i <= numero; i++){
        factorial = factorial * i;
    }
    

    cout<<"\nEl factorial de el numero es: "<<factorial<<endl;


    system("pause");
    return 0;
}