#include <bits/stdc++.h>
using namespace std;
struct objeto{
    int pi;
    int pj;
    int d;
    int l;

}act, sig;
queue <objeto> cola;
int mt[1000][1000];
bool mb[1000][1000];
int di[]={8,-1,-1, 0, 1, 1,  1, 0,-1};
int dj[]={8, 0, 1, 1, 1, 0, -1, -1,-1};
int main(){
    int f,c,t, ii,jj,cont++;
    char p;
    cin >> f >> c;
    for(int i = 1; i <= f; i++){
        for(int j = 1; j <=c; j++){
            cin >> p;
            switch(p){
                case 'I':
                    mt[i][j] = -1;
                    break;
                case 'L':
                    act.pi = i;
                    act.pj = j;
                    act.d = 0;
                    act.l= 0;
                    cont++;
                    cola.push(act);
                    break;
                case 'O':
                    mt[i][j] = 1;
                    break;
            }
        }
    }
    while(!cola.empty()){
        act = cola.front();
        cola.pop();
        if(act.d == 0){
            cont++;
        }
        for(int k = 1; k <= 4; k++){
            sig.pi = act.pi+di[k];
            sig.pj = act.pj + dj[k];
            sig.d = act.d + 1;
            if((mt[sig.pi][sig.pj] == 1 ||mt[sig.pi][sig.pj] == -1||mt[sig.pi][sig.pj] == 0)&& sig.pi <= f && sig.pi >= 1 && sig.pj <= c && sig.pi >=1 && sig.d == 1 && mb[sig.pi][sig.pj] != true){
                cola.push(sig);
                sig.l += mt[sig.pi][sig.pj];
                mb[sig.pi][sig.pj] = true;
            }
        }

    }
    for(int i = 1; i <= f; i++){
        for(int j = 1; j <=c; j++){
            switch(mt[i][j]){
                case -1:
                    cout<<"I ";
                    break;
                case 0:
                    if(act.l < 0){
                        cout<<"D ";
                    }else{
                        cout<<"L ";
                    }
                    break;
                case 1:
                    cout<<"O ";
                    break;
            }
        }
        cout<<'\n';
    }
    return 0;
}



