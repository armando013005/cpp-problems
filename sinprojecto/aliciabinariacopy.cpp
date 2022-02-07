#include <bits/stdc++.h>
using namespace std;
struct Nodo {
    int valor = -1;
    int izq = -1; 
    int der = -1; 
    int puerta=-10;
};
Nodo arbol[100002];
vector <int> v;
int tam, aux, i, raiz;

void insertar(int val, int puerta,int node) {
    if (arbol[node].valor == -1) {
        arbol[node].valor = val;
        arbol[node].puerta = puerta;
        return;
    }
    if (arbol[node].valor > val) {
        if (arbol[node].izq == -1) {
            arbol[node].izq = val;
        }
        insertar(val, puerta,arbol[node].izq);
        return;
    }
    if (arbol[node].valor < val) {
        if (arbol[node].der == -1) {
            arbol[node].der = val;
        }
        insertar(val, puerta,arbol[node].der);
        return;
    }
}
void visita(int nodo){
    cout << arbol[nodo].valor << ' ';
}
void inorden(int node) {
    if (node == -1) return;
    inorden(arbol[node].izq);
    v.push_back(arbol[node].valor);
    inorden(arbol[node].der);
}
/*void preorden (int nodo){
    if(nodo == -1)return;
    visita(nodo);
    preorden(arbol[nodo].izq);
    preorden(arbol[nodo].der);
}
void postorden (int nodo){
    if(nodo == -1)return;
    postorden(arbol[nodo].izq);
    postorden(arbol[nodo].der);
    visita(nodo);
}*/
void esta (int l){
    cout<<l;
   if(arbol[l].valor == -1){
       cout<<0;
       return;
    }else{
       return;
    }
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio();
    cin >> tam;
    cin >> raiz;
    insertar(raiz, i ,raiz);
    for (i = 0; i < tam; i++) {
        cin >> aux;
        v.push_back(aux);
        insertar(aux, i, raiz);
    }
    int l,L;
    cin>>L;
    for(int j=0; j<L; j++) {
        cin>>l;
        esta(l);
    }
    return 0;
}