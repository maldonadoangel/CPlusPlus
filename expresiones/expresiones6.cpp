#include <iostream>

using namespace std;

int main(){
    int auxiliar, contador = 0;
    float sumaPersona, nota, sumaNota, total = 0.0;

    cout<<"Cuantos alumnos desea registrar?"<<endl;
    cin>>contador;

    while(contador != auxiliar){
        cout<<"Ingresa la nota del alumno: "<<endl;
        cin>>nota;
        sumaNota += nota;
        auxiliar++;
    }
    total = sumaNota/contador;
    cout<<"el total de la suma de personas: "<<sumaNota<<endl;
    cout<<"El total del promedio de las notas de los alumnos es:"<<total<<endl;

    return 0;
}