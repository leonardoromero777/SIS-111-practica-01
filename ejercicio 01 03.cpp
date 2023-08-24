// Materia: Programación I, Paralelo 1

// Autor: Leonardo Antonio Romero Tito

// Fecha creación: 17/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio:3

// Problema planteado:Promedio de notas, escriba un programa que lea N notas y saque le promedio general.

#include <iostream>

using namespace std;
int main(){
    float estudiante;
    float promedio;
    float notas;
    float n;
    cout<<"cuantos estudiantes hay ";
    cin>>estudiante;
    cout>>"ingrese notas";
    cin>>n;
        for (n=0 ; n>estudiante ; ++n); //for para ir sumando las notas

        promedio=(estudiante*n)/estudiante;
    cout<<"el promedio es"<<promedio<<endl;
    cin.ignore();
    cin.get();


}
