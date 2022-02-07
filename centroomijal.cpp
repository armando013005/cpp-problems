#include <bits/stdc++.h>
using namespace std;
char mt[1005][1005];
int f,c,cont=0;
void visitar(int i, int j){
    if(mt[i][j]=='v'||mt[i][j]=='#'){
        return;
    }
    mt[i][j]='v';
    visitar(i+1,j);
    visitar(i,j+1);
    visitar(i-1,j);
    visitar(i,j-1);
}
int main(){
    cin>>f>>c;
    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            cin>>mt[i][j];
        }
    }
    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            if(mt[i][j]=='.'){
                cont++;
                visitar(i,j);
            }
        }
    }
    cout<<cont;
    return 0;
}
