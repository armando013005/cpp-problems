#include<bits/stdc++.h>
using namespace std;
/*
 Programa para que la computadora pida 3 calificaciones
  y diga si está aprobado o reprobado. Para estar aprobado
  el promedio debe ser mayor o igual a 60 y además
  no deberá reprobar ningun parcial
*/
int main(){
    float c,c1,c2, prom;
    cin>>c>>c1>>c2;
    prom=(c+c1+c2)/3;
    if(prom>=60&&c>=60&&c1>=60&&c2>=60){
        cout<<"Aprobado";
    }else{
        cout<<"Reprobado";
    }
    return 0;
}
