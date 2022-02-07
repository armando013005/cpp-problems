#include "AdivinaElNumero.h"

// Main
//	long long pista(long long x)
long long medio, aux;
void adivina(long long a, long long b) {
	while(a<b){
        medio = (a+b)/2;
        aux = pista(medio);
        if(aux == 0) return;
        if(aux == 1) a = medio + 1;
            else b = medio - 1;
	}
}
