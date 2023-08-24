// Materia: Programación I, Paralelo 1

// Autor: Leonardo Antonio Romero Tito

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 8

// Problema planteado:En el estacionamiento del Megacenter se cobra 7 Bs la primera hora, si pasa de una hora se cobra 5 Bs adicional por hora. Ingrese la cantidad de horas que un vehículo está estacionado y calcule cuanto debe pagar
#include <iostream>
using namespace std;
int main(){
    int horas;
    int total;
    int i;
    int suma=5;
    cout<<"introduce las horas estacionadas: ";
    if (horas==1)
    {
        total=7;
        cout<<"el total a pagar es "<<total;
    }
    else
    {
        for(i=1;i<horas;i++)
        {
        total=(horas+(suma*i))+2; //total a pagar mas los 2 de la primeera hora
        }
        cout<<"el total a pagar es "<<total<<endl;
    }

}
