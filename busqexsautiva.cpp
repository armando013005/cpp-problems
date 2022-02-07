#include <bits/stdc++.h>
using namespace std;
int mt[202][202];
int f,c;
void visitar(int i, int j){
    if(mt[i][j]>=1||mt[i][j]==-1||i<0||i>f-1||j<0||j>c-1){
        return;
    }
    mt[i][j]=1;
    visitar(i+1,j);
    visitar(i,j+1);
    visitar(i-1,j);
    visitar(i,j-1);
}
int main(){
    char pog;
    cin>>f>>c;
    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            cin>>pog;
            if(pog=='#'){
                mt[i][j]=-1;
            }
        }
    }
    visitar(0,0);
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            cout<<mt[i][j]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
