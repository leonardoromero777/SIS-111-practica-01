// Materia: Programación I, Paralelo 1

// Autor: Leonardo Antonio Romero Tito

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 10

// Problema planteado:Realice un programa que detecte si una letra ingresada el vocal o consonante. Si no es ninguna letra que diga que es carácter especial.
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(){
    string letra;
    cout<<"ingrese una letra: ";
    cin>>letra;

    if(letra=="a" ||letra=="e" || letra=="i" || letra=="o" || letra=="u")
    {
        cout<<"es vocal";
    }
    if (letra=="#" ||letra=="$" || letra=="°" || letra=="@" || letra=="&") //if para la lista de caracteres especiales
    {
       cout<<"es especial";
    }
        else
        {
        cout <<"es consonante"<<endl;
        }
}
