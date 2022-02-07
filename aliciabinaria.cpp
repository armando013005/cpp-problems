#include <bits/stdc++.h>
using namespace std;
int va[1000002];
int izq[1000002];
int der[1000002];
int pos=0;
int crear_nodo(int dato){
    va[pos]=dato;
    izq[pos]=-1;
    der[pos]=-1;
    return pos++;
}

void insertar(int nodo, int dato){
    if(dato < va[nodo]){
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
void visit(int nodo){
    cout << va[nodo] << ' ';
}
void inorder (int nodo){
    if(nodo == -1) return;
    inorder(izq[nodo]);
    visit(nodo);
    inorder(der[nodo]);
}
void preorder (int nodo){
    if(nodo == -1) return;
    visit(nodo);
    preorder(izq[nodo]);
    preorder(der[nodo]);
}
void postorder (int nodo){
    if(nodo == -1) return;
    postorder(izq[nodo]);
    postorder(der[nodo]);
    visit(nodo);
}
void busqbin(int nodo,int l){
    int auxrbol = va[nodo];
    while(auxrbol != l){
        if(l < auxrbol){
            auxrbol = izq[auxrbol];
        }else{
            auxrbol = der[nodo];
        }
    }
}
int main(){
    int n=0,raiz,L,l;
    cin >> n;
    int vv;
    //insertar datos al arbol
    for(int i=0; i<n; i++){
        cin>>vv;
        if(i==0){
           raiz= crear_nodo(vv);
        }else{
            insertar(raiz,vv);
        }
    }
    cin>>L;
    for(int i=0; i<L; i++){
        cin>>l;
       //busqbin(raiz,l);
    }
    cout<<"clave ";
    for(int i=0; i<pos; i++){
        cout<<va[i]<<' ';
    }
    cout<<'\n'<<"izq ";
    for(int i=0; i<pos; i++){
        cout<<izq[i]<<' ';
    }
    cout<<'\n'<<"der ";
    for(int i=0; i<pos; i++){
        cout<<der[i]<<' ';
    }
   return 0;
}