#include "tesoro.h"
#include <bits/stdc++.h>
using namespace std;
struct ij{
    int e;
    int g;
}ome;
vector <ij> c;
bool mt[100][100];
int tes_actuales=0,tes_ante=0,tes_co;
bool permitido=0;
// Main
//	int Preguntar(int i, int j)
//	bool Cavar(int i, int j)
void BuscaTesoros(int n, int m, int k) {
    for(int j=1;j<=m;j++){
        if(Preguntar(n,j)>tes_actuales){
            tes_actuales++;
            for(int i=1;i<=n;i++){

            }
        }
    }
}
