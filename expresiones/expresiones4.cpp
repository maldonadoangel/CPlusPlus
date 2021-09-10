#include <iostream>

using namespace std;

int main(){
    double a,b,c,d, total = 0.0;

    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;
    cout<<"Ingrese el valor de c: "<<endl;
    cin>>c;
    cout<<"Ingrese el valor de d: "<<endl;
    cin>>d;
    total = a+(b/(c-d));
    cout<<"El valor de la operacion es: "<<total<<endl;

    return 0;

}