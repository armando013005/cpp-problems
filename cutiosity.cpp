#include <bits/stdc++.h>
using namespace std;
int mt[1005][1005];
struct objeto{
    int pi;
    int pj;
    int d;
}act, sig;
queue <objeto> cola;
int main(){
    int f,c,ii,ji,fi,fj,mov;
    cin >> f >> c >> mov
    >> ii >> ji >> fi >> fj;
    int di[15];
    int dj[15];
    for(int i = 1; i <= mov; i++){
        cin >> di[i] >> dj[i];
    }
    mt[fi][fj] = -1;
    act.pi = ii;
    act.pj = ji;
    act.d = 0;
    cola.push( act );
    int menor; bool si=false;
    while(!cola.empty()){
        act = cola.front();
        cola.pop();
        for(int k = 1; k <= mov; k++){
            sig.pi = act.pi + di[k];
            sig.pj = act.pj + dj[k];
            sig.d = act.d+1;
            if(mt[sig.pi][sig.pj] == -1 && sig.pi <= f && sig.pi >=1 && sig.pj <= c && sig.pj >=1 ){
                si = true;
                menor = sig.d; 
                if(sig.pi == ii && sig.pj == ji){
                    menor = 0;
                }
                cout<<menor;
                return 0;             
            }
            if(sig.pi <= f && sig.pi >=1 && sig.pj <= c && sig.pj >= 1 && mt[sig.pi][sig.pj] == 0){
                sig.d = act.d+1;
                cola.push(sig);
                mt[sig.pi][sig.pj] = sig.d;
            }
        }
    }
    if(si==false){
        cout <<-1;
    }
    return 0;
}
/*
10 10 2
5 5
5 5
0 1
1 0
drogas
*/