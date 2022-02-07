#include <bits/stdc++.h>
using namespace std;
struct objeto{
    int pi;
    int pj;
    int d;

}act, sig;
queue <objeto> cola;
int di[]={8,-1,-1, 0, 1, 1,  1, 0,-1};
int dj[]={8, 0, 1, 1, 1, 0, -1, -1,-1};
int mt[2005][2005];
bool mb[2005][2005];
int main(){
    int f,c,ac,af,t, cont = 0;
    cin >> f >> c;
    for(int i = 1; i <= f; i++){
        for(int j = 1; j <=c; j++){
            cin >> mt[i][j];
        }
    }
    cin >> af >> ac >> t;
    t = floor(t*0.10);
    act.pi = af;
    act.pj = ac;
    act.d = 0;
    cola.push(act);

    while(!cola.empty() && act.d < t){
        act = cola.front();
        cola.pop();
        if(mt[act.pi][act.pj] >= 0 && mb[act.pi][act.pj] == false){
                cont += mt[act.pi][act.pj];
                mt[act.pi][act.pj] = 0;
                mb[act.pi][act.pj] = true;
            }
        for(int k = 1; k <= 8; k++){
            sig.pi = act.pi+di[k];
            sig.pj = act.pj + dj[k];
            sig.d = act.d + 1;
            if(mt[sig.pi][sig.pj] >= 0 && mb[sig.pi][sig.pj] == false){
                cont += mt[sig.pi][sig.pj];
                mt[sig.pi][sig.pj] = 0;
                mb[act.pi][act.pj] = true;
            }
            if(mt[sig.pi][sig.pj] == 0 && sig.pi <= f && sig.pi >= 1 && sig.pj <= c && sig.pi >=1 && sig.d < t ){
                cola.push(sig);
                mt[sig.pi][sig.pj] = sig.d;
                mb[sig.pi][sig.pj] = true;
            }
        }
    }
    if(cont == 0){
        cout << "Cambio de planes";
    }else{
        cout << cont;
    }
    return 0;
}

