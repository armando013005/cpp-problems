#include <bits/stdc++.h>
using namespace std;
struct datos {
    int numero;
    string nombre;
    bool ingles;
    int arr[3];
};
int main () {
    datos empleado;
    datos empleado2;
    datos empleado3;

    //datos del empleado
    empleado.numero=25;
    empleado.nombre="Juan Perez";
    empleado.ingles=1;

    cout<<"Datos capturados:"<<'\n';
    cout<<empleado.numero<<'\n';
    cout<<empleado.nombre<<'\n';
    cout<<empleado.ingles<<'\n';

    empleado.arr[1]=5;
   empleado.arr[2]=8;
    empleado.arr[3]=10;
    cout<<empleado.arr[1]<<" "<<empleado.arr[2]<<" "<<empleado.arr[3];
    return 0;
}
