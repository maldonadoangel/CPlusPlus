#include <iostream>

using namespace std;

int main(){

    float a,b,c,d,e,f, total = 0.0;
    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;
    cout<<"Ingrese el valor de c: "<<endl;
    cin>>c;
    cout<<"Ingrese el valor de d: "<<endl;
    cin>>d;
    cout<<"Ingrese el valor de e: "<<endl;
    cin>>e;
    cout<<"Ingrese el valor de f: "<<endl;
    cin>>f;
    
    total = (a+(b/c))/(d+(e/f));
    cout<<"El resultado de la ecuacion es: "<<total<<endl;

    return 0;
}