/*****************************************************************************
* 
* Osi-Vals (problema privado)
* ?%
* 
******************************************************************************/

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int t, p, s, pi, si;

    cin >> t
        >> p >> s
        >> pi >> si;
    //son compatibles?
    int secuencia1 = (p + p / 2) + 1, secuencia2 = (pi + pi / 2) + 1;

    int minimo = lcm(secuencia1,secuencia2);

    bool noCansado = false;
    if (((minimo / secuencia1) <= s) && ((minimo / secuencia2) <= si)) { noCansado = true; }

    if (t >= minimo && noCansado) {
        cout << minimo << '\n';
        for (int i = 1; i <= (minimo / secuencia1); i++) {
            for (int j = 1; j < secuencia1; j++) {
                cout << j << ' ';
            }
            cout << "P ";
        }
        cout << '\n';
        for (int i = 1; i <= (minimo / secuencia2); i++) {
            for (int j = 1; j < secuencia2; j++) {
                cout << j << ' ';
            }
            cout << "P ";
        }
    }
    else {
        cout << "No compatible";
    }

    return 0;
}