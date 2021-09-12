#include <iostream>

using namespace std;

int main(){
    float nota1, nota2, nota3, total = 0.0;

    cout<<"Ingrese la nota 1 de practicas: "<<endl;
    cin>>nota1;
    cout <<"Ingrese la nota 2 de teoria:"<<endl;
    cin>>nota2;
    cout<<"Ingrese la nota 3 de participacion: "<<endl;
    cin>>nota3;
    total = (nota1*0.30) + (nota2 *0.60) + (nota3*0.10);

    cout<<"La nota final es de: "<<total<<endl;


    return 0;
}