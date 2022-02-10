/********************************************************************
*
* https://omegaup.com/arena/problem/COMI_Binomios
* 100%
* hecho en clase
* 
*********************************************************************/
#include<iostream>
using namespace std;

long long int m[100][100];

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
     int n;
    cin >> n;
    m[1][1] = 1;
    for (int i = 2; i <= n+1;i++) {
        for (int j = 1; j <= n+1; j++) {
            m[i][j] = m[i - 1][j] + m[i - 1][j - 1];
        }
    }
    if (n==0) {
        cout << 1;
        return 0;
    }
    int contx = n, conty = 0;
    for (int x=1;x<=n+1;x++){
        if (m[n+1][x] == 1) {
           // cout << m[n + 1][x];
            if (contx > 1) {
                cout << "x^" << contx;
            }
            else if (contx == 1) {
                cout << "x";
            }
            if (conty > 1) {
                cout << "y^" << conty;
            }
            else if (conty == 1) {
                cout << "y";
            }
        }
        else {
            cout << m[n+1][x];
            if (contx > 1) {
                cout << "x^" << contx;
            }
            else if (contx == 1) {
                cout << "x";
            }
            if (conty > 1) {
                cout << "y^" << conty;
            }
            else if (conty == 1) {
                cout << "y";
            }
        }
        conty++;
        contx--;
        if (x!=n+1) {
            cout << "+";

        }
    }
    return 0;
}

