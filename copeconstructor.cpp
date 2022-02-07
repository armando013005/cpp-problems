#include <bits/stdc++.h>
using namespace std;
int m,n,e,mt[1002][1002];
int main(){
    cin>>m>>n;
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mt[i][j];
        }
    }
    cin>>e;
    for(int i=0;i<=m-1;i++){
        for(int f=0;f<=e-1;f++){
            for(int j=0;j<=n-1;j++){
                for(int c=0;c<=e-1;c++){
                    cout<<mt[i][j]<<' ';
                }
            }
        cout<<'\n';
        }
    }
return 0;
}
