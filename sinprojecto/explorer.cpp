#include <bits/stdc++.h>
using namespace std;
struct objeto{
    int pi;
    int pj;
    int d;
}act, sig;
queue <objeto> c;
int mt[55][55];
int di[]={8,1,0,-1,0};
int dj[]={8,0,1,0,-1};
int main(){
    int f, cc, ii, jj, iii, jjj,m;
    cin>>f>>cc;
    for(int i=0; i<f; i++){
        for(int j=0; j<cc; j++){
            cin>>m;
            if(m == 1){
                mt[i][j] = -1;
            }
        }
    }
    cin >> ii >> jj
    >> iii >> jjj;
    mt[iii][jjj] = -8;
    act.pi = ii;
    act.pj = jj;
    act.d = 0;
    c.push(act);
    while(!c.empty()){
        act = c.front();
        c.pop();
        if(mt[act.pi][act.pj] == -8){
            break;
        }
        for(int k = 1; k<=4; k++) {
            sig.pi = act.pi + di[k];
            sig.pj = act.pj + dj[k];
            sig.d = act.d + 1;
            if(mt[sig.pi][sig.pj] == -8){
                break;
            }
            if(mt[sig.pi][sig.pj] == 0 && sig.pi <= f && sig.pi >= 0 && sig.pj <= cc && sig.pj >= 0 ){
                c.push(sig);
                mt[sig.pi][sig.pj] = sig.d;
            }
        }
    }
    cout<<act.d+1;
    return 0;
}