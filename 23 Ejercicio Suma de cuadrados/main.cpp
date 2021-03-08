#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int sum = 0, cuadrado;

    for (int i = 1; i <= 10; i++){
        cuadrado = i * i;
        sum += cuadrado;
    }

    cout<<"El resultado de la suma es: "<<sum<<endl;

    getch();
    return 0;
}