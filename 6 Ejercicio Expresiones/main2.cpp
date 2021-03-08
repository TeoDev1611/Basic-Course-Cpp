/*
	Name: RESOLVER EXPRESION
	Copyright: 2020
	Author: Mateo Hurtado 
	Date: 01/10/20 20:26
	Description: RESOLVER EXPRESION
*/


#include<iostream>

using namespace std;

int main(){
	
	float a,b,c,d,resultado = 0;
	
	cout<<"DIGITA EL NUMERO A: ";cin>>a;
	cout<<"DIGITA EL NUMERO B: ";cin>>b;
	cout<<"DIGITA EL NUMERO C: ";cin>>c;
	cout<<"DIGITA EL NUMERO D: ";cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout.precision(2);
	cout<<"El resultado es: "<<resultado;
	
	
	
	return 0;
}
