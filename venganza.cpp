#include <bits/stdc++.h>
using namespace std;
int rama[100000];
int iguanas[100000];
int vida[10000];
int izq[100000];
int der[100000];
bool herido[100000];
int heridos = 0;
void terrorismointernacional(int node,int dano){
    if(rama[node] == -1){
        return;
    }
    if(herido[node] == true){
        heridos += iguanas[node];
        if(izq[node] != -1){
            herido[izq[node]] = true;
            terrorismointernacional(izq[node], dano);
        }
        if(der[node] != -1){
            herido[der[node]] = true;
            terrorismointernacional(der[node], dano);
        }
        return;
    }
    if(dano >= vida[node] && herido[node] != true){
        heridos += iguanas[node];
        herido[node]=true;
        if(izq[node] !=-1){
            herido[izq[node]] = true;
        terrorismointernacional(izq[node], dano);
        }        if(der[node] !=-1){
            herido[der[node]] = true;
        terrorismointernacional(der[node], dano);
        }
        return;
    }
    terrorismointernacional(izq[node], dano);
    terrorismointernacional(der[node], dano);
    return;
}


int main(){
    int a,d,d1,d2,d3,d4,d5, raiz;
    cin >> d >>a;
    cin >>raiz >> d2 >> d3 >> d4 >> d5;
    rama[raiz] = raiz;
    iguanas[raiz] = d2;
    vida[raiz] = d3;
    izq[raiz] = d4;
    der[raiz] = d5;
    herido[raiz] = false;
    for(int i = 1; i < d; i++){
        cin >> d1 >> d2 >> d3 >> d4 >> d5;
         rama[d1] = d1;
         iguanas[d1] = d2;
         vida[d1] = d3;
         izq[d1] = d4;
         der[d1] = d5;
         herido[d1] = false;
    }
    terrorismointernacional(raiz, a);
    cout << heridos;
    return 0;
}

