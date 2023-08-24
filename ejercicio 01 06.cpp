// Materia: Programación I, Paralelo 1

// Autor: Leonardo Antonio Romero Tito

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 6

// Problema planteado:Número primo
#include <iostream>
using namespace std;
    int main(){
    int n;
    int i;
    cout<<"introduce un numero: ";
    cin>>n;
    if (n==1)
    {
    cout<<"el numero no es primo";
    }
    else
    {

    }
        i=2;
        while(n%i!=0) //while para ver si los divisores son del numero introducido
        {
            i++;
        }
        if (i==n)
            cout<< "es primo"<<endl;
        else
            cout<<"no es primo"<<endl;

}
