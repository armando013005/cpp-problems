#include <bits/stdc++.h>
using namespace std;
struct object{
    int pi;
    int pj;
    int d;
}act, sig;
queue <object> cola;
int mt[105][105];
int di[]={8,1,1};
int dj[]={8,0,1};
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int f, c, cont=0,cont_max, cont_act=0;
    cin>>f;
    for(int i = 1; i <= f; i++){
        for(int j = 1; j <= i; i++){
            cin>>c;
            if(c == 1){
                mt[i][j] = -1; cont++;
            }
            if(c == 0){
                mt[i][j] = -2;
            }
        }
    }
    for(int i = 1; i <= f; i++){
        for(int j = 1; j <= i; i++){
            if(mt[i][j] == -2){
                act.pi = i;
                act.pj = j;
                act.d = 0;
                cola.push(act);
                while(!cola.empty()){
                    act = cola.front();
                    cola.pop();
                    for(int k = 0; k<2; k++){
                        sig.pi = act.pi + di[k];
                        sig.pj = act.pj + dj[k];
                        sig.d = act.d + 1;
                        if(mt[sig.pi][sig.pj] == -2 && sig.pi <= f && sig.pi >=1 && sig.pj <= f && sig.pj >= 1){

                        }
                    }
                }

            }
        }
    }

    return 0;
}
