#include <bits/stdc++.h>
using namespace std;
int matriz[3100][3100];
char matrizaux[3100][3100];
struct ijd{

    int posi;
    int posj;
    int dist;

}actual, siguiente;
queue <ijd> cola;
int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n, m;
    char aux;
    cin>>n>>m;
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=m; ++j) {
            cin>>aux;
            matrizaux[i][j]=aux;
            if (aux=='#') {
                matriz[i][j]=-1;
            }
            if (aux=='P') {
                matriz[i][j]=-2;
            }
            if (aux=='.') {
                matriz[i][j]=0;
            }
        }
    }
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=m; ++j) {
            if (matriz[i][j]==-1) {
                actual.posi=i;
                actual.posj=j;
                actual.dist=0;
                cola.push(actual);
            }
         }
    }
    while (!cola.empty()) {
        actual=cola.front();
        cola.pop();
        //abajo.
        siguiente.posi=actual.posi+1;
        siguiente.posj=actual.posj;
        siguiente.dist=actual.dist+1;
        if (matriz[siguiente.posi][siguiente.posj]!=0 ||  siguiente.posi>n || siguiente.posj>m || siguiente.posi<1 || siguiente.posj<1) {
        }
        else {
            cola.push(siguiente);
            matriz[siguiente.posi][siguiente.posj]=siguiente.dist;
        }

        //derecha.
        siguiente.posi=actual.posi;
        siguiente.posj=actual.posj+1;
        siguiente.dist=actual.dist+1;
        if (matriz[siguiente.posi][siguiente.posj]!=0 || siguiente.posi>n || siguiente.posj>m || siguiente.posi<1 || siguiente.posj<1) {
        }
        else {
            cola.push(siguiente);
            matriz[siguiente.posi][siguiente.posj]=siguiente.dist;
        }

        //arriba.
        siguiente.posi=actual.posi-1;
        siguiente.posj=actual.posj;
        siguiente.dist=actual.dist+1;
        if (matriz[siguiente.posi][siguiente.posj]!=0 || siguiente.posi>n || siguiente.posj>m || siguiente.posi<1 || siguiente.posj<1) {
        }
        else {
            cola.push(siguiente);
            matriz[siguiente.posi][siguiente.posj]=siguiente.dist;
        }

        //izquierda.
        siguiente.posi=actual.posi;
        siguiente.posj=actual.posj-1;
        siguiente.dist=actual.dist+1;

        if (matriz[siguiente.posi][siguiente.posj]!=0 || siguiente.posi>n || siguiente.posj>m || siguiente.posi<1 || siguiente.posj<1) {
        }
        else {
            cola.push(siguiente);
            matriz[siguiente.posi][siguiente.posj]=siguiente.dist;
        }
    }
    matrizaux[actual.posi][actual.posj]='X';
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=m; ++j) {
            cout<<matriz[i][j];
        } cout<<'\n';
    }
    return 0;
}
