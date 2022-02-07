#include <bits/stdc++.h>
using namespace std;
int mt[105][105];
int di[]={8,-1,1, 2,2,-1, 1,-2,-2};
int dj[]={8, 2,2,-1,1,-2,-2,-1, 1};
struct objeto{
    int pi;
    int pj;
    int d;
}act, sig;
queue <objeto> cola;
int main(){
    int f,c,ii,ji,pei,pej;
    int aux;
    char p;
    cin >> f >> c
        >> ii >> ji
        >> pei >> pej;
    mt[ii][ji] = -8;
    mt[pei][pej] = -9;
    act.pi = ii;
    act.pj = ji;
    act.d = 0;
    cola.push(act);
    while(!cola.empty()){
        act = cola.front();
        cola.pop();
        if(mt[act.pi][act.pj] == -9){
                cout<<act.d; return 0;
        }
        for(int k = 1; k <= 8 ; k++){
            sig.pi = act.pi + di[k];
            sig.pj = act.pj + dj[k];
            sig.d = act.d+1;
            if(mt[sig.pi][sig.pj] == -9){
                cout<<sig.d; return 0;
            }
            if(sig.pi <= f && sig.pi>=1 && sig.pj <= c && sig.pj >=1 && mt[sig.pi][sig.pj] == 0){
                sig.d = act.d+1;
                cola.push(sig);
                mt[sig.pi][sig.pj] = act.d+1;
            }
        }
    }

    return 0;
}
