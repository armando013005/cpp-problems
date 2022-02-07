#include <bits/stdc++.h>
using namespace std;

//bool grafo[100][100];

struct nodo{
    int valor=-1;
    vector<int> conecciones;
};

nodo grafo[10];


    int main(){
        int n_nodos, n_conecciones,aux;
        cin>>n_nodos;
        for(int i=1; i<=n_nodos;i++){
            cin>>n_conecciones;
            for(int ii=1;ii<=n_conecciones;ii++){
                cin>>aux;
                grafo[i].conecciones.push_back(aux);
            }
        }


        return 0;
    }