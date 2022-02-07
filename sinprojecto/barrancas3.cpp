#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int N, K, posiv, mayor,c;
    cin>> N>> K;
    posiv= N-K+1;
    int emocionf[posiv]={};
    vector <int> e;
    for (int i=0; i<N; i++){
        cin>>c;
        e.push_back(c);
    }
    for (int i=0; i<posiv; i++){
        for (int j=i; j<i+K-1; j++){
            emocionf[i] += espv[j+1] - espv[j];
        }
    }
    mayor=emocionf[0];
    for (int i=0; i<posiv; i++){
        mayor = max(mayor, emocionf[i]);
    }
    cout<< mayor;
   return 0;
}
