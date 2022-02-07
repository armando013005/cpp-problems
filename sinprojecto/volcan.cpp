#include<bits/stdc++.h>
using namespace std;
int mt[105][105]; int f,c;
void visitar(int i, int j,int a){//a de anterior
    if (mt[i][j]==-1||mt[i][j]>=a||i<1||i>f||j<1||j>c){
        return;
    }
    a=mt[i][j];
    mt[i][j]=-1;//lo cambie por -1 para probar algo pero es igual que si hubiera puesto "0"
    visitar(i+1,j,a);//abajo
    visitar(i+1,j+1,a);
    visitar(i,j+1,a);//derecha
    visitar(i-1,j+1,a);
    visitar(i-1,j,a);//arriba
    visitar(i-1,j-1,a);
    visitar(i,j-1,a);//izquierda
    visitar(i+1,j-1,a);
}
int main(){
    int c_i,c_j;//c de crater
    cin>>f>>c>>c_i>>c_j;
    for (int i=1; i<=f; i++){
        for (int j=1; j<=c; j++){
            cin>>mt[i][j];
        }
    }
    int aux=mt[c_i][c_j];
    visitar(c_i,c_j,aux+1);
    for(int i=1; i<=f; i++){
        for(int j=1; j<=c; j++){
            if(mt[i][j]==-1){
                cout<<"X ";
            }else{
                cout<<mt[i][j]<<' ';
            }
        }
        cout<<'\n';
    }
    return 0;
}