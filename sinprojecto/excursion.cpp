#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,p,ni,pi;
    cin>>n>>p;
    vector<int> lista;
    lista.push_back(0);

    for(int i=1;i<=n;i++){
        cin>>ni;
        lista.push_back(ni);
    }
    for(int i=1;i<=p;i++){
        cin>>pi;
        cout<<lista[pi]<<'\n';
    }
    return 0;
}
