#include "primo.h"
#include <bits/stdc++.h>
using namespace std;
// Main
//	int primo(int posicion)
vector <int> criba;
 bool prim[100000005];
void c(int n){
    for(int i = 1; i <= n; i++){
        prim[i]=1;
    }
    for(int i = 2; i * i <= n; i++){
        if(prim[i]){
            for(int j = i * i; j <= n; j+= i){
                prim[j] = 0;
            }
        }
    }
    for(int i = 2; i <= n; i++){
        if(prim[i] == 1){
            criba.push_back(i);
        }
    }

}


int busca(int n) {
    c(n);
    int inicio = 0, fin = criba.size();
    while (inicio < fin){
        int mitad = (inicio + fin)/2;
        if(primo(mitad) == criba[mitad]){
            inicio = mitad + 1;
        }else{
            fin = mitad;
        }
    }
	return criba[inicio];
}
