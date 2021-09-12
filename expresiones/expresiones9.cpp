#include <iostream>
#include <math.h>

//Crear la ecuación de la formula general
using namespace std;

int main(){
    float xPositivo, xNegativo, a, b, c = 0.0;
    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;
    cout<<"Ingrese el valor de c: "<<endl;
    cin>>c;
    xPositivo = (-b+(sqrt(pow(b, 2)-(4*a*c))))/(2*a);
    xNegativo = (-b-(sqrt(pow(b, 2)-(4*a*c))))/(2*a);
    cout<<"El valor de la formula general, cuando es positiva la raiz: "<<xPositivo<<endl;
    cout<<"El valor de la formula general, cuando es negativa la raiz: "<<xNegativo<<endl;
    return 0;
}