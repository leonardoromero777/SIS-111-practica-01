// Materia: Programación I, Paralelo 1

// Autor: Leonardo Antonio Romero Tito

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 4

// Problema planteado:Conversión de temperatura de grados centígrado a Kelvin
#include <iostream>
using namespace std;
int main(){
    float c;
    cout<< "introduzca los grados a convertir: ";
    cin>> c;
    float kelvin = c+273.15; //formula para convertir grados
    cout<<"a grados kelvin es: "<<kelvin<<endl;
}
