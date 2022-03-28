// Volando al Cielo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <bits/stdc++.h>

using namespace std;

int mt[1000][1000];
bool vistos[1000][1000];
int m, n;
int x[3] = { +1,+0,-1 };

bool valido(int i, int j) {
    return   j < m&& j >= 0 && i < n&& i >= 0 && !vistos[i][j];
}

int dijkstra() {

    struct o {
        int i;
        int j;
        int c;
        bool operator<(const o& aux) const
        {
            return c > aux.c;
        }
    };

    struct e {
        int c;
        bool operator<(const e& aux) const
        {
            return c > aux.c;
        }
    };

    priority_queue <e> peque;
    priority_queue <o> q;
    if (n > 1) {
        for (int i = 0; i < m; i++) {
            q.push({ 0,i,mt[0][i] });
        }

        while (!q.empty()) {
            o s = q.top();
            //cout << s.i <<' ' << s.j << ' ' << s.c << '\n';
            q.pop();

            for (int i = 0; i < 3; i++) {
                o aux = { s.i + 1,s.j + x[i],s.c };
                if (valido(aux.i, aux.j)) {
                    vistos[aux.i][aux.j] = true;
                    aux.c += mt[aux.i][aux.j];
                    if (aux.i == n - 1) peque.push({ aux.c });
                    q.push(aux);
                }
            }
        }
    }
    else {
        for (int i = 0; i < m; i++) {
            peque.push({ mt[0][i] });
        }
    }

    return peque.top().c;
}

int main()
{
    cin >> n >> m;


    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            cin >> mt[i][j];
        }
    }
    cout << dijkstra();
    return 0;
}