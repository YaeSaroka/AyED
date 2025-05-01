#include <iostream>
#include <string>
using namespace std;

int main() {
    string Nombre;
    string Apellido;
    cout<< "Ingrese su nombre " <<endl;
    cin>> Nombre;
    cout<< "Ingrese su apellido " <<endl;
    cin>> Apellido;
    cout<< "Hola " <<Nombre << " " << Apellido << "!!" << endl;
    return 0;
}

//OTRA OPCIÓN!
/*
int main() {
    string Nombre;
    string Apellido;
    Nombre="Yael";
    Apellido= "Saroka";
    cout<< "Hola " <<Nombre << " " << Apellido << "!!" <<endl;
    return 0;
}
*/