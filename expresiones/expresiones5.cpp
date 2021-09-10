#include <iostream>

using namespace std;

int main(){
    float a,b,aux = 0.0;

    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;
    cout<<"El valor de a: "<<a<<endl;
    cout<<"El valor de b: "<<b<<endl;
    cout<<""<<endl;
    cout<<"El valor despues de intercambiarlos "<<endl;
    aux = a;
    a = b;
    b = aux;

    cout<<"El valor de a: "<<a<<endl;
    cout<<"El valor de b: "<<b<<endl;


    return 0;
}