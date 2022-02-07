#include <bits/stdc++.h>
using namespace std;
int mt[3005][3005];
int di[] = {8, 1, -1, 0, 0};
int dj[] = {8, 0, 0, 1, -1};
struct objeto{
    int pi;
    int pj;
    int d;
} act, sig;
queue<objeto> cola;
int main(){
    bool si = false, si2=false; int pedo, pedoi, pedoj, ce1,ce2;
    int f, c, ii, ji;
    int aux;
    char p;
    cin >> f >> c;
    for (int i = 1; i <= f; i++){
        for (int j = 1; j <= c; j++){
            cin >> p;
            switch (p){
            case '#':
                mt[i][j] = -1;
                act.pi = i;
                act.pj = j;
                act.d = 0;
                cola.push(act);
                break;
            case 'A':
                ii = i;
                ji = j;
                break;
            case 'P':
                mt[i][j] = -9;
                break;
            }
        }
    }
    //elefante
    while (!cola.empty()){
        act = cola.front();
        cola.pop();
        for (int k = 1; k <= 4; k++){
            sig.pi = act.pi + di[k];
            sig.pj = act.pj + dj[k];
            sig.d = act.d + 1;
            if (sig.pi <= f && sig.pi >= 1 && sig.pj <= c && sig.pj >= 1 && mt[sig.pi][sig.pj] == 0){
                sig.d = act.d + 1;
                cola.push(sig);
                mt[sig.pi][sig.pj] = act.d + 1;
            }
        }
    }
    aux = act.d; pedoi = act.pi; pedoj = act.pj;
    if(mt[ii][ji]==0){
        mt[ii][ji]=-11;
        for(int i=1; i <= f; i++){
            for(int j=1; j <= c; j++){
                if(mt[i][j] >= 0){
                    cout<<'.';
                }
                switch(mt[i][j]){
                    case -1:
                        cout<<'#';  break;
                    case -11:
                        cout<<'X'; break;
                    case -9:
                        cout<<'P'; break;
                    case -8:
                        cout<<'A'; break;
                }
            }cout<<'\n';
        }
        return 0;
    }
    mt[ii][ji] = -8;
    for(int i=1; i <= f; i++){
        for(int j=1; j <= c; j++){
            if(mt[i][j] == aux){
                if(pow(ii-pedoi,2)+pow(ji-pedoj,2) > pow(ii-i,2)+pow(ji-j,2)){
                    pedoi = i; pedoj = j;
                }
            }
        }
    }
    for(int i=1; i <= f; i++){
        for(int j=1; j <= c; j++){
            if(mt[i][j] == 0){ 
                if(si == true){
                    if(pow(ii-ce1,2) + pow(ji-ce2,2) > pow(ii-i,2) + pow(ji-j,2)){
                        ce1=i; ce2=j;
                    }
                }else{
                    ce1=i; ce2=j;
                }
                si=true;
            }
        }
    }
    if(si==true){
        mt[ce1][ce2] = -11;
    }else{
        mt[pedoi][pedoj] = -11;
    }
    for(int i=1; i <= f; i++){
        for(int j=1; j <= c; j++){
            if(mt[i][j] >= 0){
                cout<<'.';
            }
            switch(mt[i][j]){
                case -1:
                    cout<<'#';  break;
                case -11:
                    cout<<'X'; break;
                case -9:
                    cout<<'P'; break;
                case -8:
                    cout<<'A'; break;
            }
        }cout<<'\n';
    }
    return 0;
}
/*  9 9
######### 
#.......#
#.......#
#..#.#..#
#...A...#
#..###..#
#.......#
#.......#
#########
9 9
###P#####
#.P.P...#
#..P....#
#..#.#..#
#...A...#
#..###..#
#.......#
#.......#
#########
9 9
#########
#.......#
#.......#
#..#.#..#
#...A...#
#PPPP...#
#P..P...#
#PP.P...#
###P#####
*/