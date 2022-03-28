#include <iostream>

using namespace std;
int matriz[1005][1005];

bool casa(int i, int j) {
    /*
         -1,-1 | -1,+0 | -1,+1
         +0,-1 | +0,+0 | +0,+1   
         +1,-1 | +1,+0 | +1,+1
    */
     return 
         matriz[i][j] > matriz[i][j + 1] &&
         matriz[i][j] > matriz[i + 1][j + 1] &&
         matriz[i][j] > matriz[i + 1][j] &&
         matriz[i][j] > matriz[i + 1][j - 1] &&
         matriz[i][j] > matriz[i][j - 1] &&
         matriz[i][j] > matriz[i - 1][j - 1] &&
         matriz[i][j] > matriz[i - 1][j] &&
         matriz[i][j] > matriz[i - 1][j + 1];
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> matriz[i][j];
        }
    } 

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (casa(i,j)) {
                cout << i  << ' ' << j << '\n';
            }
        }
    }
   
    return 0;
}
