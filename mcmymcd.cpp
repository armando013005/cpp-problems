#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,aux,ni,nj;
    cin>>ni;
        cin>>nj;
        aux=__gcd(ni, nj);
        cout<<aux<<'\n';
        cout<<aux<<' '<<(ni*nj)/aux<<'\n';
    return 0;
}
