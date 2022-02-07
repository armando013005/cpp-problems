#include<bits/stdc++.h>
using namespace std;
int n,m,cubeta[110],pelota[110];
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>pelota[i];
    }
    for(int i=1;i<=n;i++){
        cubeta[pelota[i]]++;
    }
    for(int i=1;i<=m;i++){
        cout<<i<<": "<<cubeta[i]<<'\n';
    }
return 0;
}
