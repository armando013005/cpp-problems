#include <bits/stdc++.h>
using namespace std;
struct molde{
    int pi;
    int pj;
    int d;
}act, sig;
queue <molde> b;
int mt[2000][2000];
int di[2000];
int dj[2000];
int main(){
    int f, n, p, x, y;
    cin>>f>>n>>x>>y;
    for(int i=1; i<=n; i++){
        cin>>dj[i]>>di[i];
    }
    if(x > f || x < 1 || y > f || y < 1){
        cout<<"Tigro Seguro :v";
        return 0;
    }
    act.pi = 1;
    act.pj = 1;
    act.d = 0;
    b.push(act);
    while(!b.empty()){
        act = b.front();
        b.pop();
        if(act.pi==y && act.pj == x){
            cout<<act.d;
            return 0;
        }
        for(int i = 1; i <= n; i++){
            sig.pi = act.pi + di[i];
            sig.pj = act.pj + dj[i];
            sig.d = act.d+1;
            if(sig.pi == y && sig.pj == x){
                cout<<sig.d;
                return 0;
            }
            if(sig.pi <= f && sig.pi >= 1 && sig.pj <= f && sig.pj >=1 && mt[sig.pi][sig.pj] == 0){
                b.push(sig);
                mt[sig.pi][sig.pj] = sig.d;
            }
        }
    }
    cout<<"Tigro Seguro :v";
    return 0;
}
