#include <bits/stdc++.h>
using namespace std;
int mt[22][22];
int f,c,serp=0;
void visitar(int i, int j){
    if(mt[i][j]==0||i<1||i>f||j<1||j>c){
        return;
    }
    mt[i][j]=0;
    visitar(i+1,j);
    visitar(i,j+1);
    visitar(i-1,j);
    visitar(i,j-1);
}
int main(){
    int pog;
    cin>>f>>c;
    for (int i=1; i<=f; i++){
        for (int j=1; j<=c; j++){
            cin>>mt[i][j];
        }
    }
    for(int i=1; i<=f; i++){
        for(int j=1; j<=c; j++){
            if(mt[i][j]==1){
                serp++;
                visitar(i,j);
            }
        }
    }
    cout<<serp;
    return 0;
}
