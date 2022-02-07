#include <bits/stdc++.h>
using namespace std;
int mt[202][202];
int f,c,ap=0;
void visitar(int i, int j){
    if(mt[i][j]==-1||mt[i][j]==1||i<1||i>f||j<1||j>c){
        return;
    }
    mt[i][j]=-1;
    visitar(i+1,j);
    visitar(i,j+1);
    visitar(i-1,j);
    visitar(i,j-1);
}
int main(){
    cin>>f>>c;
    for (int i=1; i<=f; i++){
        for (int j=1; j<=c; j++){
            cin>>mt[i][j];
        }
    }
    visitar(1,1);
    for(int i=1; i<=f; i++){
        for(int j=1; j<=c; j++){
            if(mt[i][j]==0){
                visitar(i,j);
                ap++;
            }
        }
    }
    if(ap>0){
        cout<<ap;
    }else{
        cout<<"es seguro consumir este producto";
    }
    return 0;
}
