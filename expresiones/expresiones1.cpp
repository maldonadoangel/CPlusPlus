//Crear la siguiente funcion a/b + 1
#include <iostream>
#include <windows.h>

using namespace std;
int main(){
    float a, ecuacion, b = 0.0;

    cout<<"Ingresa el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingresa el valor de b: "<<endl;
    cin>>b;
    ecuacion = (a/b) + 1;
    cout<<"El resultado de la ecuacion (a/b) + 1: "<<ecuacion<<endl;


    return 0;
}