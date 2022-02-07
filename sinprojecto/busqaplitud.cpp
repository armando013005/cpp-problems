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
    int f,c,kk,ii,ji;
    char p;
    cin >> f >> c >> kk;
    for(int i = 1; i <= f; i++){
        for(int j = 1; j <= c; j++){
            cin>>p;
            switch(p){
                case '#':
                    mt[i][j] = -1; break;
                case '$':
                    ii = i; ji = j; break;
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
    /* aqui, esta el coso?
    */
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
    for(int i = 1; i <= f; i++){
        for(int j = 1; j <= c; j++){
            if(mt[i][j]>0){
                cout << '*';
            }
            switch(mt[i][j]){
                case 0:
                    cout << '.'; break;
                case -8:
                    cout << '$'; break;
                case -1:
                    cout << '#'; break;
            }
        }
        cout << "\n";
    }
    return 0;
}
/*
de i a f, e imprimir si se llega a f, la distancia
de a,b,c o n letras y si se llega imprimir la que esta mas cerca
// arrayas de movimientos i, j
int di[]={8,1,-1, 0, 0};
int dj[]={8,0, 0, 1,-1};
  for(int k=1;k<=4;k++){
            siguiente.posi=actual.posi+di[k];
            siguiente.posj=actual.posj+dj[k];
            
            if(siguiente.posi<=n&&siguiente.posi>0&&siguiente.posj<=m&&siguiente.posj>0&&matrix[siguiente.posi][siguiente.posj]==0){
                siguiente.d=actual.d+1;
                cola.push(siguiente);
                matrix[siguiente.posi][siguiente.posj]=actual.d+1;
            }
        }
    }
    TIPO INICIO FIN (I F)
7 8
########
#i######
#.#...##
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
