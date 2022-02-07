#include <iostream>
using namespace std;

struct Nodo {
    int valor = -1;
    int izq = -1; 
    int der = -1; 
};
Nodo arbol[1000000];
int tam, aux, i, raiz;
void insertar(int val, int node) {
    if (arbol[node].valor == -1) {
        arbol[node].valor = val;
        return;
    }
    if (arbol[node].valor > val) {
        if (arbol[node].izq == -1) {
            arbol[node].izq = val;
        }
        insertar(val, arbol[node].izq);
        return;
    }
    if (arbol[node].valor < val) {
        if (arbol[node].der == -1) {
            arbol[node].der = val;
        }
        insertar(val, arbol[node].der);
        return;
    }
}
void visit(int node){
    cout << arbol[node].valor << " ";
}
void inorden(int node) {
    if (node == -1) return;
    inorden(arbol[node].izq);
    visit(node);
    inorden(arbol[node].der);
}

void preorder(int node){
    if(node == -1) return;
    visit(node);
    preorder(arbol[node].izq);
    preorder(arbol[node].der);
}

void postorder(int node){
    if(node == -1) return;
    postorder(arbol[node].izq);
    postorder(arbol[node].der);
    visit(node);
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio();
    cin >> tam;
    cin >> raiz;
    insertar(raiz, raiz);
    for (i = 1; i < tam; i++) {
        cin >> aux;
        insertar(aux, raiz);
    }
    preorder(raiz); cout << '\n';
    inorden(raiz); cout << '\n';
    postorder(raiz);
    return 0;
}