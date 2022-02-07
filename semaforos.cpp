#include <bits/stdc++.h>
using namespace std;
struct obj{
    int nodo;
    int pasos;
    int segs;
}act,aux;

struct arc{
  bool nod=false;
  int s=0;
}arches[100][100];

bool ya[100];
int nodos,arcos, comienzo, fin,vecinos,secs,act_sec;
int min_sec = 2147483647;

void dfs(int node, int x){
    if(node == x){
        if(act_sec < min_sec){
            min_sec = act_sec;
        }
    }
    for(int i=1;i<=nodos;i++){
        if(arches[node][i].nod && !ya[i]){
            act_sec += arches[node][i].s;
            ya[i] = true;
            dfs(i,x);
            act_sec -= arches[node][i].s;
            ya[i] = false;
        }
    }
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin>>nodos;
    for(int i=1; i<=nodos; i++){
        cin>>arcos;
        for(int j=1; j<=arcos; j++){
            cin>>vecinos>>secs;
            arches[i][vecinos].nod=true;
            arches[i][vecinos].s=secs;
        }
    }

    cin>>comienzo>>fin;
    dfs(comienzo,fin);
    cout<<"Se tarda "<<min_sec<<" segundos";
    return 0;

}