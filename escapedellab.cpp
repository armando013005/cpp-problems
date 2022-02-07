#include <bits/stdc++.h>
using namespace std;
int mt[202][202];
int f,c;
bool si=false;
void visitar(int i, int j){
    if(mt[i][j]>=1||mt[i][j]==-1||i<0||i>f-1||j<0||j>c-1){
        return;
    }
    if(mt[i][j]==-5){
        si=true;
        cout<<"Si";
        exit(0);
    }
    mt[i][j]=1;
    visitar(i+1,j);
    visitar(i,j+1);
    visitar(i-1,j);
    visitar(i,j-1);
}
int main(){
    int ii,jj;
    cin>>f>>c;
    string pog[f+5];
    getchar();
    for(int i=0; i<f; i++){
        getline(cin,pog[i]);
        for (int j=0; j<c; j++){
            switch(pog[i][j]){
                case '#':
                    mt[i][j]=-1;
                    break;
                case 'S':
                    mt[i][j] =-5;
                    break;
                case 'E':
                    ii=i; jj=j;
                    break;
            }
        }
    }
    visitar(ii,jj);
    if(si==false){
        cout<<"No";
    }
    return 0;
}
