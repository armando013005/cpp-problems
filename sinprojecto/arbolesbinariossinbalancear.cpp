#include <bits/stdc++.h>
using namespace std;
struct Nodo{
    int valor = -1;
    int izq = -1;
    int der = -1;
    int pos = 0;
};
Nodo arbol[1000000];
vector <int> v;
int raiz, aux, tam;
void insertar(int val, int i,int node){
    if(arbol[node].valor == -1){
        arbol[node].valor = val;
        arbol[node].pos = i;
        return;
    }
    if(arbol[node].valor > val){
        if(arbol[node].izq == -1){
            arbol[node].izq = val;
        }
        insertar(val, i, arbol[node].izq);
        return;
    }
    if(arbol[node].valor < val){
        if(arbol[node].der == -1){
            arbol[node].der = val;
        }
        insertar(val, i, arbol[node].der);
        return;
    }

}
void buscar(int va, int nodo, int n){
    if(arbol[nodo].valor == va){
        cout<<n<<'\n';
        return;
    }
    if(va < arbol[nodo].valor){
        n++;
        buscar(va, arbol[nodo].izq, n);
        return;
    }
    if(va > arbol[nodo].valor){
        n++;
        buscar(va, arbol[nodo].der, n);
        return;
    }
}
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio();
    cin>>tam;
    cin>>raiz;
    v.push_back(raiz);
    insertar(raiz, 1, raiz);
    for(int i = 2; i<=tam; i++){
        cin>>aux;
        v.push_back(aux);
        insertar(aux, i,raiz);
    }
    for(int i = 0; i<tam; i++){
       buscar(v[i], raiz, 0);
    }
    return 0;
}