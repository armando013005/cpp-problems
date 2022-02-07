#include <bits/stdc++.h>
using namespace std;

unsigned long long int nacci(unsigned long long int f1, unsigned long long int f2, unsigned long long int x){
    vector <unsigned long long int> fibo;
    unsigned long long int fi=f1,fj=f2;
    fibo.push_back(fi);
    fibo.push_back(fj);
    for(unsigned long long int i=2; i<= x; i++){
        unsigned long long int aux = fi+fj;
        aux = aux % 1000000007; 
        fi=fj;
        fj=aux;
        fibo.push_back(fj);
    }
    return fibo[x-1];
}
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    unsigned long long int a,fi,fj,x;

    cin>>a;
    for(unsigned long long int i=0; i<a; i++){
        cin>>fi>>fj>>x;
        cout<<nacci(fi,fj,x)<<'\n';
    }
    return 0;
}
/*
4
1 1 9
3 4 1
5 10 2
3 4 6
*/