#include <bits/stdc++.h>
using namespace std;
int mt[1005][1005];
int di[]={8,1,-1, 0, 0};
int dj[]={8,0, 0, 1,-1};
struct objeto{
    int pi;
    int pj;
    int d;
}act, sig;
queue <objeto> cola;
int main(){
    int f,c,n,ii,ji,x,y;
    char p;
    cin >> ji >> ii >> n;
    for(int i = 1; i <= n; i++){
        cin>>x>>y;
        mt[500+y][500+x]=-1;
    }
    mt[500][500]=-9;
    mt[500+ii][500+ji]=-8;
    act.pi = 500;
    act.pj = 500;
    act.d = 0;
    cola.push( act );
    while(!cola.empty()){
        act = cola.front();
        cola.pop();
        if(mt[act.pi][act.pj]==-8){
            cout<<mt[act.pi][act.pj]<<act.d;
            return 0;
        }
        for(int k = 1; k <= 4 ; k++){
            sig.pi = act.pi + di[k];
            sig.pj = act.pj + dj[k];
            sig.d = act.d+1;
            if(mt[sig.pi][sig.pj]==-8){
                cout<<sig.d;
                return 0;
            }
            if(sig.pi <= 1000 && sig.pi>=1 && sig.pj <= 1000 && sig.pj >=1 && mt[sig.pi][sig.pj] == 0){
                sig.d = act.d+1;
                cola.push(sig);
                mt[sig.pi][sig.pj] = act.d+1;
            }
        }
    }
    return 0;
}
