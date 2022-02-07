#include <bits/stdc++.h>
using namespace std;

int padre_raiz;
int n_nodos;
int cont;
queue<int> cola;
bool encontrado=false;
struct Nodo{
    int dato = -1;
    int nHijos = -1;
    int hijos[100];
};
Nodo nodo[100];

    void insertar_nodo(int raiz, int padre, int valor){
        if(raiz == padre){
            nodo[raiz].nHijos++;
            int aux = nodo[raiz].nHijos;
            nodo[raiz].hijos[aux] = valor;
        } else {
            for(int i=0; i <= nodo[raiz].nHijos; i++){
                insertar_nodo(nodo[raiz].hijos[i], padre, valor);
            }
        }
    }

void recorrer_arbol(int padre){
    if(nodo[padre].nHijos == -1) return;
    for(int i = 0; i <= nodo[padre].nHijos; i++){
        recorrer_arbol(nodo[padre].hijos[i]);
        cout<<nodo[padre].hijos[i]<<" ";
    }
}


    // busqueda en profundidad
    void dfs (int padre, int valor) {
        if(valor==padre){
            cout<<"si existe dfs"<<endl;
        } else {
            cont++;
            if(nodo[padre].nHijos==-1) return;
            for(int i=0;i<=nodo[padre].nHijos;i++){
                dfs(nodo[padre].hijos[i],valor);
            }
        }
        if(cont==n_nodos)cout<<"no existe dfs"<<endl;
    }


    // busqueda en amplitud
    bool bfs(int padre, int valor) {
        if(cola.empty()) return false;
        cola.pop();
        for(int i=0;i<=nodo[padre].nHijos;i++){
            if(valor==nodo[padre].hijos[i]){
                encontrado=true;
                return true;
            }
            cola.push(nodo[padre].hijos[i]);
        }
        bfs(cola.front(),valor);
    }


    // esto no lo hicieron en el video, pero lo sugirieron, asi que lo hice
    // recorrido en amplitud----> solo que tiene un error, no imprime la raiz
    // así que hay que mandarla imprimir en un principio
    void recorridoBFS(int padre) {
        if(cola.empty()) return;
        cola.pop();
        for(int i=0;i<=nodo[padre].nHijos;i++){
            cout<<nodo[padre].hijos[i]<<" ";
            cola.push(nodo[padre].hijos[i]);
        }
        recorridoBFS(cola.front());
    }


int main()
{
    cin>>n_nodos;
    cin>>nodo[1].dato;
    for(int i = 2; i <= n_nodos; i++){
        int padre;
        cin>>padre;
        insertar_nodo(nodo[1].dato, padre, i);
    }


    //-------recorrido dfs  Fer-------------
    cout<<endl;
    cout<<"---recorrer Fer (postOrden)----"<<endl;
    recorrer_arbol(1);
    cout<<nodo[1].dato;
    cout<<endl;

    // Buscar con dfs
    cout<<endl;
    cout<<"---buscar dfs (el numero 5)----"<<endl;
    dfs(1,5);

    // Buscar con bfs
    cout<<endl;
    cout<<"---buscar bfs (el numero 5) ----"<<endl;
    cola.push(1);
    cout<<"Existe bfs? "<<bfs(cola.front(),5);  // en lugar de cola.front() pudo haber sido "1"

    cout<<endl<<endl;
    cout<<"---recorrido en amplitud----"<<endl;
    if(!cola.empty()){
        cout<<"Primero hay que vaciar!!! (no quedo vacia la cola con la busqueda bfs"<<endl;
        int n=cola.size();
        for(int i=1;i<=n;i++){
            cola.pop();
        }
    }
    cola.push(1);
    recorridoBFS(1);

    cout<<"\nOJO: no imprime el nodo raiz"<<endl;


    return 0;
}