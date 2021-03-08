#include<iostream>

using namespace std;

int main(){

    int x,y,aux;

    cout<<"Digita el valor de X: ";cin>>x;
    cout<<"Digita el valor de Y:"; cin>>y;

    /*

    x=10
    y=5

    */

    aux=x;
    x=y;
    y=aux;

    cout<<"\n El nuevo valor de X es: "<<x<<endl;
    cout<<"\n El nuevo valor de Y es: "<<y<<endl;

    return 0;
}