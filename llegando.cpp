#include <bits/stdc++.h>
using namespace std;

bool arches[1010][1010];
int ya[1010];
int nodos,caminos,limit,fin,nodo1,nodo2,p,cont=0;
bool o;
int dfs(int node, int x,int con){
    if(node == x){
        if(con == limit){
            o = true;
        }
    }
    if(!o){
        for(int i=1;i<=nodos;i++){
            if(arches[node][i] && !ya[i] && con<limit){
                ya[i] = true;
                dfs(i,x,con+1);
                ya[i] = false;
            }
        }
    }
    return o;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin>>nodos>>caminos;
    for(int i=1; i<=caminos; i++){
        cin>>nodo1>>nodo2;
        arches[nodo1][nodo2]=true;
        arches[nodo2][nodo1]=true;
    }
    cin>>p;
    for(int i=1; i<=p; i++){
        cin>>fin>>limit;
        cout<<dfs(1,fin,0)<<'\n';
        o = false;
    }
    return 0;
}
