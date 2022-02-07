#include<bits/stdc++.h>
using namespace std;

struct datos{
    int num;
    string nom;
    bool ingles;
    int arr[30];
};
int main(){

    datos empleado;///declarando objeto

    ///datos del empleado
    cout<<"matricula: ";
    cin>>empleado.num;
    cout<<"nombre: ";
    cin>>empleado.nom;
    cout<<"domina ingles??:(0 para no, y 1 para si): ";
    cin>>empleado.ingles;
    cout<<"que dias desea libres?: ";
    for(int i=1;i<=3;i++){
        cin>>empleado.arr[i];
    }

    cout<<"datos: "<<'\n';
    cout<<empleado.nom<<'\n';
    cout<<empleado.num<<'\n';
    cout<<empleado.ingles<<'\n';

    cout<<"dias extras disponibles: "<<'\n';
    cout<<empleado.arr[1]<<" "<<empleado.arr[2]<<' '<<empleado.arr[3]<<'\n';



return 0;
}
