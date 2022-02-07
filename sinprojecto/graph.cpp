#include <bits/stdc++.h>
using namespace std;

struct nodo{
    int valor=-1;
    vector<int> conecciones;
};
nodo grafo[10];

queue<int> cola;
bool visitados[10];
int cont=0;
int n_nodos, n_conecciones, aux;

// busqueda en profundidad
    void dfs(int node, int valor){
        if(visitados[node]) return;
        visitados[node]=true;
        if(valor==node){
            cout<<"si existe dfs";
        } else {
            cont++;
            //if(grafo[node].conecciones.size()==-1) return;  //  ¿porque -1?
            if(grafo[node].conecciones.size()==-1) return;
            for(int i=0;i<grafo[node].conecciones.size(); i++){
                dfs(grafo[node].conecciones[i], valor);
            }
        }
        if(cont == n_nodos){
            cout<<"no existe dfs";
        }
    }

//busqueda en amplitud
bool bfs(int node, int valor){
    if(cola.empty()) return false;
    cola.pop();
    for(int i = 0; i < grafo[node].conecciones.size(); i++){
        if(valor == grafo[node].conecciones[i]){
            return true;
        }
        if( !visitados[grafo[node].conecciones[i]] ){
            visitados[grafo[node].conecciones[i]] = true;
            cola.push(grafo[node].conecciones[i]);
        }
    }
    bfs(cola.front(),valor);
}


int main(){

    cin >> n_nodos;
    for(int i = 1; i <= n_nodos; i++){
        cin >> n_conecciones;
        grafo[i].valor = i;
        for(int ii = 1; ii <= n_conecciones; ii++){
            cin>>aux;
            grafo[i].conecciones.push_back(aux);
        }
    }

    // busqueda en amplitud

    cola.push(1);
    if(bfs(1,5)) cout<<"Encontrado BFS";
    else cout<<"NO encontrado BFS";

    
    // busqueda en profundidad  QUITALE EL COMENTARIO A UNO DE LOS EJEMPLOS DE ABAJI
    //dfs(1,5);
    //dfs(1,8); //ejemplo en donde no existe :errorcin: se repite varias veces: no existe dfs, no existe dfs, no existe dfs,
    return 0;
}