#include <bits/stdc++.h>
using namespace std;
int mt[502][502];
int f,c,may=0,pos=0,aux=0, posmay=0;
void visitar(int i, int j){
    if(mt[i][j]==-1||mt[i][j]==0||i<1||i>f||j<1||j>c){
        return;
    }
    aux+=mt[i][j];
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
    for(int i=1; i<=c; i++){
        for(int j=1; j<=f; j++){
            if(mt[j][i]>0){
                pos++;aux=0;
                visitar(j,i);
                if(aux>may){
                    posmay=pos;
                    may=aux;
                }
            }
        }
    }
    cout<<posmay<<' '<<may;
    return 0;
}
