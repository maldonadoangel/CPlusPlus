#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main(){
    string primerNombre = "";
    string segundoNombre = "";
    string primerApellido = "";
    string segundoApellido = "";
    int edad = 0;
    string telefono = "";
    cout<<"Bienvenido usuario"<<endl;
    cout<<"Ingresa tu primer nombre: "<<endl; cin>>primerNombre;
    cout<<"Ingresa tu segundo nombre: "<<endl; cin>>segundoNombre;
    cout<<"Ingresa tu primer apellido: "<<endl; cin>>primerApellido;
    cout<<"Ingresa tu segundo apellido: "<<endl; cin>>segundoApellido;
    cout<<"Ingresa tu edad: "<<endl; cin>>edad;
    cout<<"Ingresa tu telefono: "<<endl; cin>>telefono;
    cout<<"Guardado tus datos...."<<endl;
    Sleep(2000);
    cout<<"Tu Nombre es: "<<primerNombre<<" "<<segundoNombre<<" "<<primerApellido<<" "<<segundoApellido<<" Tu edad es: "<<edad<<" Tu telefono es: "<<telefono<<endl;



    return 0;
}