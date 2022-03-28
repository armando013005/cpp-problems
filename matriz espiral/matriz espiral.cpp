// matriz espiral.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int x,
n, m, mt[105][105];

bool valido(int i,int j) {
    return j <= m && j > 0 && i <= n && i > 0 && mt[i][j] == 0;
}
int main()
{
    cin >> n >> m;

    bool choke = false;
    int i = 1, j = 1, x=1;
    int velx = 1, vely = 0;

    while (!choke) {
        mt[i][j] = x;
        x++;
        switch (velx)
        {
        case -1:
            if (valido(i, j -1)) {
                j--;
            }
            else {
                velx = 0;
                //puedo ir hacia arriba?
                if (valido(i - 1, j)) {
                    vely = -1;
                }
                else {
                    //puedo ir hacia abajo?
                    if (valido(i + 1, j)) {
                        vely = 1;
                    }
                    else {//si no puedo moverme en 'y' y tampoco en 'x', termine
                        choke = true;
                    }
                }
            }
            break;
        case 1:
            if (valido(i, j + 1)) {
                j++;
            }
            else {
                velx = 0;
                //puedo ir hacia arriba?
                if (valido(i - 1, j)) {
                    vely = -1;
                }
                else {
                    //puedo ir hacia abajo?
                    if (valido(i + 1, j)) {
                        vely = 1;
                    }
                    else {//si no puedo moverme en 'y' y tampoco en 'x', termine
                        choke = true;
                    }
                }
            }
            break;
        }
        switch (vely)
        {
        case -1:
            if (valido(i - 1, j )) {
                i--;
            }
            else {
                vely = 0;
                //puedo ir hacia la izquerda?
                if (valido(i , j- 1)) {
                    velx = -1;
                    j--;
                }
                else {
                    //puedo ir hacia la derecha?
                    if (valido(i , j + 1)) {
                        velx = 1;
                        j++;
                    }
                    else {//si no puedo moverme en 'y' y tampoco en 'x', termine
                        choke = true;
                    }
                }
            }
            break;
        case 1:
            if (valido(i + 1, j)) {
                i++;
            }
            else {
                vely = 0;
                //puedo ir hacia la izquerda?
                if (valido(i, j - 1)) {
                    velx = -1;
                    j--;
                }
                else {
                    //puedo ir hacia la derecha?
                    if (valido(i, j + 1)) {
                        velx = 1;
                        j++;
                    }
                    else {//si no puedo moverme en 'y' y tampoco en 'x', termine
                        choke = true;
                    }
                }
            }
            break;
        }
    }

    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= m; y++) {
            cout << mt[x][y]<<' ';
        }
        cout << '\n';
    }

    return 0;
}

