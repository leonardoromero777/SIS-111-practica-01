// Materia: Programaci�n I, Paralelo 1

// Autor: Leonardo Antonio Romero Tito

// Fecha creaci�n: 17/08/2023

// Fecha modificaci�n: 23/08/2023

// N�mero de ejericio: 1

// Problema planteado:�rea de un tri�ngulo.

#include <iostream>

int base;
int altura;
int resultado;

using namespace std;

int main(){
    cout<<"ingrese la base del triangulo";
    cin>>base;
    cout<<"ingrese la altura del triangulo";
    cin>>altura;
    resultado=(base*altura)/2; //formula para calcular el area
    cout<<"el area del triangulo es: "<<resultado<< endl;

}

