#include<bits/stdc++.h>
using namespace std;
int a,b,c,m,n,k;
struct Cola{
    int Arreglo[150];
    int fin=-1;
    int inicio=0;
    void push(int n){
        fin++;
        Arreglo[fin]=n;
    }
    bool vacio(){
        return inicio>fin;
    }
    void pop(){
        inicio++;
    }
    int frente(){
        return Arreglo[inicio];
    }
}; 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin>>m>>n>>k;
    cin.ignore();
    Cola q[m+2];
    for(int i=0;i<k;i++){
        char N;
        cin>>N;
        if(N=='F'){
            cin>>a>>b;
            q[b].push(a);
        }else{
            cin>>c;
            while(!q[c].vacio()){
                cout<<q[c].frente()<<'\n';
                q[c].pop();
            }
        }
    }
    return 0;
}
