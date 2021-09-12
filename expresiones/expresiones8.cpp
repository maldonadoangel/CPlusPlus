#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float lado1,lado2,hipotenusa = 0.0;

    cout<<"Ingresa el valor de un lado: "<<endl;
    cin>>lado1;
    cout<<"Ingresa el valor de otro lado: "<<endl;
    cin>>lado2;
    hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));
    cout<<"El valor de la hipotenusa es: "<<hipotenusa<<endl;


    return 0;
}