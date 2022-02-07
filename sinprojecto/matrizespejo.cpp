
#include <bits/stdc++.h>
using namespace std;
int m,n,mt[102][102];
int main(){
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mt[i][j];
        }
    }
    /*for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            mt[i][j];
        }
    }*/
    for(int i=0;i<m;i++){
        for(int j=m-1;j>=0;j--){
            cout<<mt[i][j]<<' ';
        }
        cout<<'\n';
    }
return 0;
}
