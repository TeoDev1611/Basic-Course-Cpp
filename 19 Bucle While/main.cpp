/*
En este vídeo analizaremos uno de los bucles de c++, la sentencia while, cuya sintaxis es la siguiente:

while(expresion logica){
    conjunto de instrucciones;
}
*/
#include<iostream>

using namespace std;

int main(){
	
	int i;

	i = 1;

	while(i<=10){
	    cout<<i<<endl;
		i++;
	}

	std::cout<<"BUCLE TERMINADO";

	return 0;
}
