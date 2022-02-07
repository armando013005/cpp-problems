#include <bits/stdc++.h>
using namespace std;
struct objeto{
    int pi;
    int pj;
    int d;
}act, sig;
queue <objeto> c;
int mt[105][105];
int di[]={8,1,0,-1,0};
int dj[]={8,0,-1,0,1};
int main (){
    int f, cc, O,o, oo;
    cin>>f>>cc>>O;
    for(int i = 0; i < O; i++){
        cin>>o>>oo;
        mt[o][oo] = -1;
    }
    //mt[50][50] = -7;
    mt[f][cc]= -8;
    act.pi = 50;
    act.pj = 50;
    act.d = 0;
    c.push(act);
    while(!c.empty()){
        act = c.front();
        c.pop();
        if(mt[act.pi][act.pj] == -8){
            cout<<act.d;
            return 0;
        }
        for(int k = 1; k <=4 ; k++) {
            sig.pi = act.pi + di[k];
            sig.pj = act.pj + dj[k];
            sig.d = act.d + 1;
            if(mt[sig.pi][sig.pj] == -8){
                cout<<sig.d;
                return 0;
            }
            if(mt[sig.pi][sig.pj] == 0 && sig.pi <= 100 && sig.pi >= 0 && sig.pj <= 100 && sig.pj >= 0 ){
                c.push(sig);
                mt[sig.pi][sig.pj] = sig.d;
            }
        }
    }
    return 0;
}