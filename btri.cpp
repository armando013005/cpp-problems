#include <bits/stdc++.h>
using namespace std;
vector <int> v;
int val[1000002];
int izq[1000002];
int der[1000002];
int pos=0;
int alt =0;
int crear_nodo(int dato){
    val[pos]=dato;
    izq[pos]=-1;
    der[pos]=-1;
    return pos++;
}
void insertar(int nodo, int dato){
    if(val[nodo] > dato){
        if(izq[nodo]==-1){
            izq[nodo]=crear_nodo(dato);
        }else{
            insertar(izq[nodo],dato);
        }
    }else{
        if(der[nodo]==-1){
            der[nodo]=crear_nodo(dato);
        }else{
            insertar(der[nodo],dato);
        }
    }
}
void visita(int nodo){
    cout << val[nodo] << ' ';
}
void inorden (int nodo){
    if(nodo == -1){
        return;
    }
    inorden(izq[nodo]);
    visita(nodo);
    inorden(der[nodo]);
}
void preorden (int nodo){
    if(nodo == -1){
        return;
    }
    visita(nodo);
    preorden(izq[nodo]);
    preorden(der[nodo]);
}
void postorden (int nodo){
    if(nodo == -1){
        return;
    }
    postorden(izq[nodo]);
    postorden(der[nodo]);
    visita(nodo);
}
int altura (int nodo){
    if(val[nodo] == -1){
        return 0;
    }
    int aizq = altura(izq[nodo]);
    int ader = altura(der[nodo]);
    int altura = max(aizq , ader)+1;
    return altura;
}
void buscar(int va, int nodo, int n){
    if(val[nodo] == va){
        cout<<n<<'\n';
        return;
    }
    if(va < val[nodo]){
        n++;
        buscar(va, izq[nodo], n);
        return;
    }
    if(va > val[nodo]){
        n++;
        buscar(va, der[nodo], n);
        return;
    }
}
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio();
    int n=0,raiz;
    cin >> n;
    int vv;//v de valores :D
    for(int i=0; i<n; i++){
        cin >> vv;
        v.push_back(vv);
    }
    //insertar datos al arbol
    for(int i=0; i<n; i++){
        if(i==0){
           raiz= crear_nodo(v[i]);
        }else{
            insertar(raiz,v[i]);
        }
    }
    int a;
    cin>>a;
    altura(a);
   return 0;
}