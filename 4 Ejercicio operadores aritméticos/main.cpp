/*
Ejercicio 1: Escribe un programa que lea de la entrada est�ndar dos n�meros y muestre en la salida est�ndar su suma, resta, multiplicaci�n y divisi�n.
*/

//ASCII � = 160
//ASCII � = 130
//ASCII � = 161
//ASCII � = 242
//ASCII � =  163 

#include<iostream>

using namespace std;

int main (){
	
	int n1,n2,suma = 0,resta=0,multiplicacion = 0, division=0;
	
	cout<<"Digite un numero: ";cin>>n1;
	cout<<"Digita otro numero: ";cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division= n1 / n2;
	
	cout<<"\nEl resultado de la suma es "<<suma<<endl;
	cout<<"El resultado de la resta es "<<resta<<endl;
	cout<<"El resultado de la multiplicaci\242n es "<<multiplicacion<<endl;
	cout<<"El resultado de la divisi\242n es "<<division<<endl;
	
	
		
	
	return 0;
}
