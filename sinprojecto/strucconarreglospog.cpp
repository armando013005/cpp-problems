#include<bits/stdc++.h>
using namespace std;

struct datos{
    int num;
    string nom;
    bool ingles;
    int sal;
};
int main(){
    int n=3;
    datos empleado;///declarando objeto
    datos arreglo[n];
    for(int i=0;i<n;i++){
        ///datos del empleado
        cout<<"matricula: ";
        cin>>empleado.num;
        cout<<"nombre: ";
        cin>>empleado.nom;
        cout<<"domina ingles??:(0 para no, y 1 para si): ";
        cin>>empleado.ingles;
        cout<<"salario deseado?: ";
        cin>>empleado.sal;
        arreglo[i]=empleado;
        cout<<'\n';
    }
    cout<<"--------------------------\n";
    for(int i=1;i<=n;i++){
        ///datos del empleado
        cout<<"empleado "<<i<<'\n';
        cout<<"matricula: ";
        cout<<empleado.num<<'\n';
        cout<<"nombre: ";
        cout<<empleado.nom<<'\n';
        cout<<"domina ingles??:(0 para no, y 1 para si): ";
        cout<<empleado.ingles<<'\n';
        cout<<"salario deseado?: ";
        cout<<empleado.sal<<'\n';
        cout<<'\n';
    }



return 0;
}
