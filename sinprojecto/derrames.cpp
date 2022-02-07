#include <bits/stdc++.h>
using namespace std;
int mt[105][105];
int f,c;
void visitar(int i, int j){
    if(mt[i][j]>=1||mt[i][j]==-1||i<1||i>f||j<1||j>c){
        return;
    }
    mt[i][j]=1;
    visitar(i+1,j);
    visitar(i+1,j+1);
    visitar(i,j+1);
    visitar(i-1,j+1);
    visitar(i-1,j);
    visitar(i-1,j-1);
    visitar(i,j-1);
    visitar(i+1,j-1);
}
int main(){
    char pog; int omegalul=0;
    cin >> f >> c;
    for (int i = 1; i <= f; i++){
        for (int j = 1; j <= c; j++){
            cin>>pog;
            if(pog=='*'){
                mt[i][j] =- 1;
            }
        }
    }

    for(int i=1; i<= f; i++){
        for(int j=1; j<= c; j++){
            if(mt[i][j] == 0){
                visitar(i,j);
                omegalul++;
            }
        }
    }
    cout << omegalul;
    return 0;
}
