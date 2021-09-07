#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    //Calculo del iva en Guatemala
    float iva, total, producto;

    cout<<"Bienvenido, Ingrese el valor de su producto: "<<endl;
    cin>>producto;
    iva = producto * 0.12;
    total = producto + iva;
    cout<<"Espere unos segundos calculando el iva..."<<endl;
    Sleep(2000);
    cout<<"El resultado de su producto con iva es: "<<total<<endl;
    return 0;
}