#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m, aux,c,cont=0, d, mi, ma;
    cin>>m>>n;
    aux=m*n;
    ma=max(m,n);
    mi=min(m,n);
    while(aux > 0){
        d = floor(ma/mi);
        cont = cont+d;
        c = (mi*mi)*d;
        aux = aux - c;
        long long int aux2 = ma - mi*d;
        if(mi > aux2){
            ma = mi;
            mi = aux2;
        }
    }
    cout<<cont;
    return 0;
}
