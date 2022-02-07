#include <iostream>
using namespace std;
struct Nodo {
    int valor = -1;
    int izq = -1; 
    int der = -1; 
    int niveles = 0;
    int pos = 0;
};
Nodo arbol[100];
int tam, aux, i, raiz,nivel;

void insertar(int val, int i,int node) {
    if (arbol[node].valor == -1) {
        arbol[node].valor = val;
        arbol[node].pos = i;
        return;
    }
    if (arbol[node].valor > val) {
        if (arbol[node].izq == -1) {
            arbol[node].izq = val;
        }
        insertar(val, i,arbol[node].izq);
        return;
    }
    if (arbol[node].valor < val) {
        if (arbol[node].der == -1) {
            arbol[node].der = val;
        }
        insertar(val, i,arbol[node].der);
        return;
    }
}
void visita(int nodo){
    cout << arbol[nodo].valor << ' ';
}
void inorden(int node) {
    if (node == -1) return;
    inorden(arbol[node].izq);
    cout << arbol[node].valor << ' ';
    inorden(arbol[node].der);
}
void preorden (int nodo){
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
}
int alt (int nodo){
    if(arbol[nodo].izq == -1 && arbol[nodo].der == -1){
        return 0;
    }
    int aizq = alt( arbol[nodo].izq);
    int ader = alt( arbol[nodo].der);
    int altura = max(aizq , ader)+1;
    return altura;
}
int busqbin(int val, int node){
    if(arbol[val].valor == val){
        return arbol[node].pos;
    }
    if(arbol[node].valor > val && arbol[node].izq != -1){
        return busqbin(val, arbol[node].izq);
    }
    if(arbol[node].valor < val && arbol[node].der != -1){
        return busqbin(val, arbol[node].der);
    }
}
void drogas(int nodo, int n){
    if(arbol[nodo].izq != -1){
        arbol[arbol[nodo].izq].niveles = n+1;
        nivel = max(n,nivel);
        drogas(arbol[nodo].izq,n+1);
    }
    if(arbol[nodo].der != -1){
        arbol[arbol[nodo].der].niveles = n+1;
        nivel = max(n,nivel);
        drogas(arbol[nodo].der,n+1);
    }
    return;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio();
    cin >> tam;
    cin >> raiz;
    insertar(raiz, 1,raiz);
    for (i = 2; i <= tam; i++) {
        cin >> aux;
        insertar(aux, i, raiz);
    }
    int a;
    cin>>a;
    cout<<alt(a);
    busqbin(a,raiz);
    return 0;
}
