#include<bits/stdc++.h>
using namespace std;
int grande,chico;
int mcd(int x, int y){
    int aux=x%y;
    if(aux==0){
        return y;
    }
    return mcd(y,aux);
}
int mcm(int x, int y){
    return (x*y)/mcd(x,y);
}
int main(){
    cin>>grande>>chico;
    grande=max(grande,chico);
    chico=min(grande,chico);
    mcd(grande, chico);
    return 0;
}