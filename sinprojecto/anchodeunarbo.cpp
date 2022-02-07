#include <bits/stdc++.h>
using namespace std;
int mt[10002][10002];
int val[10002];
int izq[10002];
int der[10002];
int niveles[10002];
vector <int> orden;
int nivel = -1;
void ponermt(int nodo){
    orden.push_back(val[nodo]);
}
void inorden (int nodo){
    if(nodo == -1){
        return;
    }
    inorden(izq[nodo]);
    ponermt(nodo);
    inorden(der[nodo]);
}

void drogas(int nodo, int n){
    if(izq[nodo] != -1){
        niveles[izq[nodo]] = n+1;
        nivel = max(n,nivel);
        drogas(izq[nodo],n+1);
    }
    if(der[nodo] != -1){
        niveles[der[nodo]] = n+1;
        nivel = max(n,nivel);
        drogas(der[nodo],n+1);
    }
    return;
}
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio();
    int raiz, tam,vv,iz,de;
    cin>>tam;
    cin>>raiz>>iz>>de;
    val[raiz]=raiz; izq[raiz]=iz; der[raiz]=de;
    for(int i=1; i<tam; ++i){
        cin>>vv>>iz>>de;
        val[vv]=vv; izq[vv]=iz; der[vv]=de;
    }
    niveles[raiz]= 1;
    drogas(raiz, 1);
    nivel++;
    inorden(raiz);
    for(int i=0; i<tam; ++i){
        mt[niveles[orden[i]]][i]=orden[i];
    }
    int aux,maxlvl=1, maxancho=1,ii,jj;
    bool si = false;
    for(int i=1; i<=nivel; ++i){
        for(int j=0; j<tam; ++j){
            if(mt[i][j] > 0){
                if(si==false){
                    ii=j; 
                    si=true;
                }else{
                    jj=j;
                }
            }
        }
        aux = (jj-ii)+1;
        if(aux == maxancho){
            maxlvl = min(maxlvl, i);
        }else if(aux > maxancho){
            maxlvl=i; maxancho = aux;
        }
        si =false;
        ii=0;
        jj=0;
    }
    cout<<maxlvl<<' '<<maxancho;
    return 0;
}
