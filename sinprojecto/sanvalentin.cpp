#include <bits/stdc++.h>
using namespace std;
int x,n,m,suma_mayor=0,i_mayor=0,suma;
int ni[100010];
int comprar(int indice){
    int aux=0;
    for(int i=indice;i<=n;i++){
        aux+=ni[i];
        if(aux>m){
            return aux-ni[i];
        }
    }
    return aux;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>ni[i];
    }
    for(int i=1;i<=n;i++){
        suma=comprar(i);
        if(suma>=suma_mayor){
            suma_mayor = suma;
            i_mayor = i;
        }
    }
    cout<<i_mayor;
    return 0;
}