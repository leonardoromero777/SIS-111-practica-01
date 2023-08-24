// Materia: Programación I, Paralelo 1

// Autor: Leonardo Antonio Romero Tito

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 9

// Problema planteado:Realice un programa que ingrese los meses de 1 al 12 y el programa despliegue el mes en literal. Si se ingresa un valor distinto a 1 al 12 el programa debe dar un mensaje de mes inválido.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"introduzca un numero";
    cin>>n;
    switch(n) // switch para los 12 numeros de los meses
    {
        case 1: cout<<"el mes es enero";
                break;
        case 2: cout<<"el mes es febrero";
                break;
        case 3: cout<<"el mes es marzo";
                break;
        case 4: cout<<"el mes es abril";
                break;
        case 5: cout<<"el mes es mayo";
                break;
        case 6: cout<<"el mes es junio";
                break;
        case 7: cout<<"el mes es julio";
                break;
        case 8: cout<<"el mes es agosto";
                break;
        case 9: cout<<"el mes es septiembre";
                break;
        case 10: cout<<"el mes es octubre";
                break;
        case 11: cout<<"el mes es noviembre";
                break;
        case 12: cout<<"el mes es diciembre";
                break;
        default: cout<<"error, mes no existente"<<endl;
    }
}
