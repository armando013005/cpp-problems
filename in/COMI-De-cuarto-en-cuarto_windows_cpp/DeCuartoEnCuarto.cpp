#include "DeCuartoEnCuarto.h"
#include <bits/stdc++.h>
using namespace std;
struct nodo{
    int d=-1;
    int hijos[10010];
};
nodo arbol[10010]:
// Main
//	int siguienteCuarto(int n)
//	void move(int c)
//	void regresa()
void
void Player1(int x, int y) {
    arbol[x].d=x;
    for(int i=1;i<=y;i++){
        int sadge=siguienteCuarto(i);
        arbol[x].hijos[sadge]=sadge;
    }
}
