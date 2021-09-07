#include <iostream>

using namespace std;

int main(){
    float numero1, numero2, totalSuma, totalResta, totalMultiplicacion, totalDivision = 0.0;

    cout<<"Ingrese el valor de su primer numero: "<<endl;
    cin>>numero1;
    cout<<"Ingrese el valor de su segundo numero: "<<endl;
    cin>>numero2;
    totalSuma = numero1 + numero2;
    cout<<"La suma de los dos numeros es: "<<totalSuma<<endl;
    totalResta = numero1 - numero2;
    cout<<"La resta de los dos numeros es: "<<totalResta<<endl;
    totalMultiplicacion = numero1 * numero2;
    cout<<"La multiplicacion de los dos numeros es: "<<totalMultiplicacion<<endl;
    if(numero2 == 0){
        numero2++; 
        cout<<"El valor en el denominador no puede ser 0, por lo tanto sumamos el valor de 1 al mismo"<<endl;
        totalDivision = numero1 / numero2;
        cout<<"El total de la division es: "<<totalDivision<<endl;
    }
    else{
        totalDivision = numero1 / numero2;
        cout<<"El total de la division es: "<<totalDivision<<endl;
    }
    
    return 0;
}