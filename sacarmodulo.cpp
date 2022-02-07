#include<iostream>
using namespace std;

int M[2000][2000];
int n, m;
int contador;
int ni, mi; // posicion del guardia
char aux;


//--------------------------------VISITAR-----------------------------------------
void visitar (int i, int j){
    if( M[i][j]>=1 || M[i][j]==-1 || i<1 || i>n || j <1 || j>m){
        return;   // no visitable
    }

    contador++;
    M[i][j]=contador;
    visitar(i+1,j); // visitar abajo
    visitar(i,j+1); //visitar derecha
    visitar(i-1,j) ; // visitar arriba
    visitar(i,j-1) ; // visitar izquierda
}

//--------------------------------------------------------------------------------------



int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m; j++){
            cin>>aux;
            if(aux=='#'){
                M[i][j] = -1;
            }
        }
    }

    cin>>ni>>mi ; // preguntar por donde va a pasar el perrito
    visitar(ni,mi);



    //imprimir
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m; j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
     }



    return 0;
}
