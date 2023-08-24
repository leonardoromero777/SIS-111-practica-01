// Materia: Programaci�n I, Paralelo 1

// Autor: Leonardo Antonio Romero Tito

// Fecha creaci�n: 14/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 2

// Problema planteado:. Volumen de una esfera
#include <math.h>
#include <iostream>

using namespace std;

int main(){
    float radio;
    float volumen;
    const float pi=3.1416;
    cout<<"ingrese el radio de la esfera";
    cin>>radio;
    volumen=(4* (pi *pow(radio,3)))/3; //formula para calcular el volumen
    cout<<"el volumen de la esfera es: "<<volumen<<endl;
    cin.ignore();
    cin.get();
}
