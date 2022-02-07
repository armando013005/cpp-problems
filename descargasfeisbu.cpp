#include<bits/stdc++.h>
using namespace std;
queue <string> d;
char wow;
int descargas,acc=1;
string archivo;
//D significa que se solicita una descarga y seguirá el nombre del archivo que se solicita descargar.
void D(){
    cin>>archivo;
    d.push(archivo);
    cout<<"ok\n";
}
//T, significa que la descarga más reciente ha terminado.
void T(){
    cout<<"descargada "<<d.front()<<'\n';
    d.pop();
}
//C, se está preguntando cuántas descargas faltan
void C(){
    cout<<"faltan "<<d.size()<<" descarga(s)\n";
}
//X significa que la conexión a Internet se perdió, por lo que ahí terminará tu programa y debes escribir el número de descargas que quedaron pendientes.
int X(int algo){
    cout<<d.size()<<" descarga(s) abortadas";
    return 0;
}
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    for(int i=0; i<acc;i++){
        cin>>wow;
        switch(wow){
            case 'D':
                acc++;
                D();
                break;
            case 'T':
                acc++;
                T();
                break;
            case 'C':
                acc++;
                C();
                break;
            case 'X':
                X(0);
                break;
        }
    }
    return 0;
}
