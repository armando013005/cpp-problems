#include <bits/stdc++.h>
using namespace std;
int mt[2005][2005];
int di[]={8,1,-1, 0, 0};
int dj[]={8,0, 0, 1,-1};
struct objeto{
    int pi;
    int pj;
    int d;
}act, sig;
queue <objeto> cola;
int main(){
    int f,c,ii,ji;
    char p;
    cin >> f >> c;
    for(int i = 1; i <= f; i++){
        for(int j = 1; j <= c; j++){
            cin>>p;
            if(p == '#'){
                mt[i][j] -= 1;
            }
        }
    }
    cin >> ii >> ji;
    //inicio
    mt[ii][ji]=-8;
    act.pi = ii;
    act.pj = ji;
    act.d = 0;
    cola.push( act );
    while(!cola.empty()){
        act = cola.front();
        cola.pop();
        for(int k = 1; k <= 4 ; k++){
            sig.pi = act.pi + di[k];
            sig.pj = act.pj + dj[k];
            sig.d = act.d+1;
            if(sig.pi <= f && sig.pi>=1 && sig.pj <= c && sig.pj >=1 && mt[sig.pi][sig.pj] == 0){
                sig.d = act.d+1;
                cola.push(sig);
                mt[sig.pi][sig.pj] = act.d+1;
            }    
        }
    }
    cout << act.d;
    return 0;
}