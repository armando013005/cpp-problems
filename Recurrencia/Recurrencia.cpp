/*******************************************************************
*
* https://omegaup.com/arena/problem/Recurrencia-con-dominio-positivo
* 100%
* 
********************************************************************/
#include<iostream>
using namespace std;
long long int mem[100];
long long int funcion(long long int n) {
    if (abs(n) == 25) {
        return 1;
    }
    else if (n < 0) {
        if (mem[n+25]>0) {
            return mem[n+25];
        }
        else {
            mem[n+25] = funcion(n - 1) + funcion(1 - n);
            return mem[n+25];
        }
    }
    else if (n == 0) {
        if (mem[n + 25] > 0) {
            return mem[n + 25];
        }
        else {
            mem[n + 25] = funcion(-1) + funcion(1);
            return mem[n + 25];
        }
    }
    else if (n > 0) {
        if (mem[n+25]> 0) {
            return mem[n+25];
        }
        else {
            mem[n+25] = funcion(n + 1) + funcion(-n);
            return mem[n+25];
        }
    }
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    long long int n;
    cin >> n;
    cout << funcion(n);
    return 0;
}
