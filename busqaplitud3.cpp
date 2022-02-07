#include <bits/stdc++.h>
using namespace std;
int di[]={8,1,-1, 0, 0};
int dj[]={8,0, 0, 1,-1};
int mt[205][205];
struct objeto{
    int pi;
    int pj;
    int d;
}act, sig;
queue <objeto> cola;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int f,c,a,aa,b,bb, aux;
    int p;
    cin >> f >> c;
    for(int i = 1; i <= f; i++){
        for(int j = 1; j <= c; j++){
            cin>>p;
            if(p == 1){
                mt[i][j] = -1;
            }
        }
    }
    cin>>a>>aa
    >> b >> bb;
    mt[b+1][bb+1] = -8;
    act.pi = a+1;
    act.pj = aa+1;
    act.d = 0;
    cola.push( act );
    char pog; int menor= 100;
    while(!cola.empty()){
        act = cola.front();
        cola.pop();
        for(int k = 1; k <= 4; k++){
            sig.pi = act.pi + di[k];
            sig.pj = act.pj + dj[k];
            sig.d = act.d+1;
            if(mt[sig.pi][sig.pj] == -8){
                cout<<sig.d;
            }
            if(sig.pi <= f && sig.pi>=1 && sig.pj <= c && sig.pj >=1 && mt[sig.pi][sig.pj] == 0){
                sig.d = act.d+1;
                cola.push(sig);
                mt[sig.pi][sig.pj] = act.d+1;
            }
        }
    }
    for(int i = 1; i <= f; i++){
        for(int j = 1; j <= c; j++){
            cout << mt[i][j] <<' ';
        }
        cout<< '\n';
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
#.#..f..
#.#.###.
#...#C..
*/
}
