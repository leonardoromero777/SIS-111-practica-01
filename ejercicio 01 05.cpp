// Materia: Programación I, Paralelo 1

// Autor: Leonardo Antonio Romero Tito

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 5

// Problema planteado:Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y raíz cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 )
#include <iostream>
#include <math.h> //ingresamos biblioteca para calculadora
using namespace std;
int main(){
    int x1;
    int x2;
    int y1;
    int y2;
    float distancia;
    cout<<"introduce el primer punto: ";
    cin>>x1;
    cin>>x2;
    cout<<"introduce el segundo punto: ";
    cin>>y1;
    cin>>y2;

    distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    cout<<"la distancia de los puntos es: "<<distancia<<endl;
}
