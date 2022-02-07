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
    for (int i = 1; i <= f; i++){
        for (int j = 1; j <= c; j++){
            if (mt[i][j] == -1){
                act.pi = i;
                act.pj = j;
                act.d = 0;
                cola.push(act);
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
    aux = act.d;
    //andy
    bool si = false, si2=false; int pedo, pedoi, pedoj, pita1,pita2;
    if(mt[ii][ji] == 0){
        mt[ii][ji] = -11;
        for(int i = 1; i <=f; i++){
            for(int j = 1; j <= c; j++){
                if(mt[i][j] >=0){
                    cout<<'.';
                } 
                switch(mt[i][j]){
                    case -11:
                        cout<<'X'; break;
                    case  -1:
                        cout<<'#'; break;
                    case -9:
                        cout<<'P'; break;
                }
            }cout<<'\n';
        }
        return 0;
    }
    for(int i = 1; i <=f; i++){
        for(int j = 1; j <= c; j++){
            if(mt[i][j] == 0){
                mt[i][j] = -7;
            }
            if(mt[i][j] >0 && mt[i][j] != aux){
                mt[i][j] = 0;
            }
            if(mt[i][j] == aux){
                mt[i][j] = -11;
            }
        }
    }
    aux = -11;
    act.pi = ii;
    act.pj = ji;
    act.d = 0;
    cola.push(act);
    while (!cola.empty()){
        act = cola.front();
        cola.pop();
        if(mt[act.pi][act.pj] == -7 && si == false){
                aux = 0; si=true; pedo = act.d;
                pedoi = act.pi; pedoj = act.pj;
                mt[act.pi][act.pj] == -12;
            }else if(mt[act.pi][act.pj] == -7 && act.d == pedo && si == true) {
                pita1 = (ji-pedoj)^2+(ii-pedoi)^2;
                pita2 = (ji-act.pj)^2+(ii-act.pi)^2;
                if(pita1 > pita2){
                    mt[pedoi][pedoj] = 0;
                    pedoj = act.pj; pedoi = act.pi;
                    mt[pedoi][pedoj] = -12;
                }
            }
            if(si==false){
                if(mt[act.pi][act.pj] == -11 && si2 == false){
                    pedo = act.d; pedoj = act.pj; pedoi = act.pi; 
                    si2=true; mt[act.pi][act.pj] = -12;
                }else if(mt[act.pi][act.pj] == -11 && pedo == act.d && si2 == true){
                    pita1 = (ji-pedoj)^2+(ii-pedoi)^2;
                    pita2 = (ji-act.pj)^2+(ii-act.pi)^2;
                    if(pita1 > pita2){
                        mt[pedoi][pedoj] = 0;
                        pedoi = act.pi; pedoj = act.pj;
                        mt[pedoi][pedoj] = -12;
                    }
                }
            }
        for (int k = 1; k <= 4; k++){
            sig.pi = act.pi + di[k];
            sig.pj = act.pj + dj[k];
            sig.d = act.d + 1;
            if(mt[sig.pi][sig.pj] == -7 && si == false){
                aux = 0; si=true; pedo = sig.d;
                pedoi = sig.pi; pedoj = sig.pj;
                mt[sig.pi][sig.pj] == -12;
            }else if(mt[sig.pi][sig.pj] == -7 && sig.d == pedo && si == true) {
                pita1 = (ji-pedoj)^2+(ii-pedoi)^2;
                pita2 = (ji-sig.pj)^2+(ii-sig.pi)^2;
                if(pita1 > pita2){
                    mt[pedoi][pedoj] = 0;
                    pedoj = sig.pj; pedoi = sig.pi;
                    mt[pedoi][pedoj] = -12;
                }
            }
            if(si==false){
                if(mt[sig.pi][sig.pj] == -11 && si2 == false){
                    pedo = sig.d; pedoj = sig.pj; pedoi = sig.pi; 
                    si2=true; mt[sig.pi][sig.pj] = -12;
                }else if(mt[sig.pi][sig.pj] == -11 && pedo == sig.d && si2 == true){
                    pita1 = (ji-pedoj)^2+(ii-pedoi)^2;
                    pita2 = (ji-sig.pj)^2+(ii-sig.pi)^2;
                    if(pita1 > pita2){
                        mt[pedoi][pedoj] = 0;
                        pedoi = sig.pi; pedoj = sig.pj;
                        mt[pedoi][pedoj] = -12;
                    }
                }
            }
            if (sig.pi <= f && sig.pi >= 1 && sig.pj <= c && sig.pj >= 1 && mt[sig.pi][sig.pj] == 0 || mt[sig.pi][sig.pj] == -9){
                if (mt[sig.pi][sig.pj] == -9){
                    sig.d = act.d + 1;
                    cola.push(sig);
                    mt[sig.pi][sig.pj] = -10;
                }
                else{
                    sig.d = act.d + 1;
                    cola.push(sig);
                    mt[sig.pi][sig.pj] = act.d + 1;
                }
            }
        }
    }
    if(mt[ii][ji] != -12){
        mt[ii][ji] = -8;
    }
    for(int i = 1; i <=f; i++){
        for(int j = 1; j <= c; j++){
            if(mt[i][j] == -7 || mt[i][j] > 0 || mt[i][j] == -11) {
                cout<<'.';
            }
            switch(mt[i][j]){
                case -12:
                    cout<<'X'; break;
                case  -1:
                    cout<<'#'; break;
                case -10:
                    cout<<'P'; break;
                case -8: 
                    cout<<'A'; break;
            }
        }cout<<'\n';
    }
    return 0;
}