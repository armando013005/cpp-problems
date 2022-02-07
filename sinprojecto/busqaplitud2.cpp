#include <bits/stdc++.h>
using namespace std;
int di[]={8,1,-1, 0, 0};
int dj[]={8,0, 0, 1,-1};
int mt[2005][2005];
struct objeto{
    int pi;
    int pj;
    int d;
}act, sig;
queue <objeto> cola;
int main(){
    int f,c,ii,ji,fi,fj;
    bool si = false;
    char p;
    cin >> f >> c;
    for(int i = 1; i <= f; i++){
        for(int j = 1; j <= c; j++){
            cin>>p;
            switch(p){
                case '#':
                    mt[i][j] = -1;
                    break;
                case 'i':
                    ii=i; ji=j;
                    break;
                case 'f':
                    fi=i; fj=j;
                    break; 
            }
        }
    }
    mt[ii][ji] = -8;
    mt[fi][fj] = -10;
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
            if(mt[sig.pi][sig.pj] == -10){
                si = true;
                cout <<"si esta: " << sig.d;
                break;
            }
            if(sig.pi <= f && sig.pi>=1 && sig.pj <= c && sig.pj >=1 && mt[sig.pi][sig.pj] == 0){
                sig.d = act.d+1;
                cola.push(sig);
                mt[sig.pi][sig.pj] = act.d+1;
            }    
        }
    }
    if(si==false){
        cout << "no esta :( "<< si << mt[fi][fj];
    }
    return 0;
/*
de i a f, e imprimir si se llega a f, la distancia
de a,b,c o n letras y si se llega imprimir la que esta mas cerca
// arrayas de movimientos i, j
    TIPO INICIO FIN (I F)
7 8
########
#i######
###...##
#.#.###.
#.#..f..
#.#.###.
#...##..
TIPO A B C  FINAL  ¿quien llegará primero?
7 8
########
#A#####B
#.#.....
#.#.####
#.#..F..
#.#.###.
#...#C..
*/
}
