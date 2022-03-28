// esto no es una cubeta.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;
int m, n, nm[15][15] = {}, a;

bool valido(int i, int j) {
    return !nm[i][j] && j < m&& j >= 0 && i < n&& i >= 0;
}


bool se_puede (int fila, int j, int a) {
    for (int i = 0; i < a; i++) {
        if (!valido(fila,j+i)) {
            return false;
        }
    }
    return true;
}

bool recorrer() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (se_puede(i, j, a)) {
                for (int k = j; j < k + a; j++) {
                    nm[i][j] = 1;
                }
                return true;
            }
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> nm[i][j];
        }
    }
    cin >> a;

    if (a > m) {
        cout << "Se fueron a dormir por raros";
        return 0;
    }
    if (recorrer()) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout<< nm[i][j]<<' ';
            }
            cout << '\n';
        }
    }
    else {
        cout << "Se fueron a dormir por raros";
    }
    
    
    return 0;
}

