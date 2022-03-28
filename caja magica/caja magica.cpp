/*
* 
* https://omegaup.com/arena/problem/Matriz-espiral#problems
* 100%
*/

#include <iostream>

using namespace std;
int matriz[3][2];
int solution[2][2];
bool compobar() {
    return
        matriz[0][0] == solution[0][0] + solution[0][1] &&
        matriz[0][1] == solution[1][0] + solution[1][1] &&
        matriz[1][0] == solution[0][0] + solution[1][0] &&
        matriz[1][1] == solution[0][1] + solution[1][1] &&
        matriz[2][0] == solution[0][0] + solution[1][1] &&
        matriz[2][1] == solution[0][1] + solution[1][0];
}
bool pregunta() {
    bool num[10] = {};
    for (int i = 1; i <= 9; ++i) {
        num[i] = true;
        for (int j = 1; j <= 9; ++j) {
            if (num[j])continue;
            num[j] = true;
            for (int k = 1; k <= 9; ++k) {
                if (num[k])continue;
                num[k] = true;
                for (int l = 1; l <= 9; ++l) {
                    if (num[l])continue;
                    {
                        solution[0][0] = i;
                        solution[0][1] = j;
                        solution[1][0] = k;
                        solution[1][1] = l;
                    }
                    if (compobar()) {
                        return true;
                    }

                }
                num[k] = false;
            }
            num[j] = false;
        }
        num[i] = false;
    }
    return false;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int m, n;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> matriz[i][j];
        }
    }
    if (pregunta()) {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                cout << solution[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    else {
        cout << "-1";
    }
    return 0;
}