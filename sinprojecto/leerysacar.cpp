#include<bits/stdc++.h>
using namespace std;
int main(){

    int F,C;  // F filas (renglones)   C columnas
    cin>>F>>C;
    int matriz[F][C];

    //preguntar por los datos de la matriz
    for(int i=0;i<F;i++){
        for(int j=0;j<C;j++){
            cin>>matriz[i][j];
        }
    }

    cout<<"----------------"<<endl;
    cout<<"Imprimiendo los datos de la matriz"<<endl<<endl;

    for(int i=0;i<F;i++){
        for(int j=0;j<C;j++){
            cout<<matriz[i][j]<<" ";
        }
    }
return 0;
}
