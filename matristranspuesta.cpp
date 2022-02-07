#include <bits/stdc++.h>
using namespace std;
int m,n,mt[102][102];
int main(){
    cin>>m>>n;
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mt[i][j];
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mt[j][i]<<' ';
        }
        cout<<'\n';
    }
return 0;
}
