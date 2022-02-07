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

int nodos=0,arcos, comienzo, fin,vecinos,secs,act_sec;
int min_sec = 2147483647;
bool ya[100]={};
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
//bool ya[1000];
int bfs(int start,int fin){
    
    queue <obj> v;
    aux.pasos=0;
    aux.nodo=start;
    aux.segs=0;
    v.push(aux);
    while(!v.empty()){
        act = v.front();
        v.pop();
        if(act.nodo == fin){
            min_sec = min(min_sec,act.segs);
            //cout<<"min_sec (act): "<<act.segs<<' '<<act.nodo<<' '<<act.pasos<<'\n';
        }
        for(int i=1; i<=nodos; i++){
            if(arches[act.nodo][i].nod == 1 && i != start && ya[act.nodo] == false){
                aux.pasos = act.pasos + 1;
                aux.nodo = i;
                aux.segs = act.segs + arches[act.nodo][i].s;
                v.push(aux);
                ya[act.nodo] = true;
            }
        }
    }
    
  return min_sec;
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