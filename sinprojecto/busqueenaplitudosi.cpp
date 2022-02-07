
#include <bits/stdc++.h>
using namespace std;
int mt[2005][2005];
struct objeto{
    int pi;
    int pj;
    int d;
}act, sig;
queue <objeto> cola;
int main(){
    int ri,rj,ai,aj,f,c;
    cin >> c >> f >> aj >> ai >> rj >> ri;
    mt[ai][aj]=-8;
    mt[ri][rj]=-10;
    act.pi = ri;
    act.pj = rj;
    act.d = 0;
    cola.push(act);
    int menor=10000;
    while(!cola.empty()){
        act=cola.front();
        cola.pop();
        if(mt[sig.pi][sig.pj] == -8){
            if(sig.d < menor){
                menor = sig.d;
            }
        }
            //abajo
        sig.pi = act.pi+1;
        sig.pj = act.pj;
        sig.d = act.d+1;
        if(mt[sig.pi][sig.pj] == 0 && sig.pi <= f){
            cola.push(sig);
            mt[sig.pi][sig.pj] = sig.d;
        }

        //derecha
        sig.pi = act.pi;
        sig.pj = act.pj+1;
        sig.d = act.d+1;
        if(mt[sig.pi][sig.pj] == 0 && sig.pj <= c){
            cola.push(sig);
            mt[sig.pi][sig.pj] = sig.d;
        }

        //arriba
        sig.pi = act.pi-1;
        sig.pj = act.pj;
        sig.d = act.d+1;
        if(mt[sig.pi][sig.pj] == 0 && sig.pi >= 1){
            cola.push(sig);
            mt[sig.pi][sig.pj] = sig.d;
        }

        //izquerda
        sig.pi = act.pi;
        sig.pj = act.pj-1;
        sig.d = act.d+1;
        if(mt[sig.pi][sig.pj] == 0 && sig.pj >= 1){
            cola.push(sig);
            mt[sig.pi][sig.pj] = sig.d;
        }
        
    }
    for(int i=1; i<=f; i++){
        for(int j=1; j<=c; j++){
            cout << mt[i][j] << ' ';
        }
        cout << '\n';
    }
    cout<<menor;
    return 0;
}
