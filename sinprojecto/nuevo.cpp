#include <bits/stdc++.h>
using namespace std;
int matriz [505][505]={};
int n, m, aux=0;
int cont[300000]={};
void busqueda(int posi, int posj) {
    if (matriz[posi][posj]==-1 || matriz[posi][posj]==0 || posi>n || posi<1 ||posj>m || posj<1) {
        return;
    }
    else {
        cont[aux]=cont[aux]+matriz[posi][posj];
        matriz[posi][posj]=-1;
        busqueda(posi+1,posj);
        busqueda(posi,posj+1);
        busqueda(posi-1,posj);
        busqueda(posi,posj-1);
        return;
    }
}
int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int posmayor;
    unsigned long long int numayor=0;
    cin>>n>>m;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            cin>> matriz[i][j];
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (matriz[j][i]>0) {
                busqueda(j,i);
                aux++;
            }
        }
    }
    for (int i=0; i<aux; ++i) {
        if (numayor<cont[i]) {
            numayor=cont[i];
            posmayor=i+1;
        }
    }
    if (cont[0]==0) {
        cout<<0<<" "<<0;
    }
    else {
    cout<<posmayor<<" "<<numayor;
    }
    return 0;
}