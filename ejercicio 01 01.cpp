// Materia: Programación I, Paralelo 1

// Autor: Leonardo Antonio Romero Tito

// Fecha creación: 17/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 1

// Problema planteado:Área de un triángulo.

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

