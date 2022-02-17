
/*******************************************************
* 
* https://omegaup.com/arena/problem/omi-2021-virus/
* 
* 100%
* moroni
* 
*********************************************************/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Nodo {
    vector<int>envios;
};

queue<int>infect, noinfect;
Nodo grafo[100010];
bool infectados[100010];
int n, m, k, mini, maxi;

void analizar();

int main()
{
    cin >> n >> m >> k;
    for (int x = 0; x < k; x++) {
        int aux;
        cin >> aux;
        infect.push(aux);
        infectados[aux] = true;
    }
    for (int x = 0; x < m; x++) {
        int aux1, aux2;
        cin >> aux1 >> aux2;
        grafo[aux1].envios.push_back(aux2);
    }
    analizar();
    cout << mini << " " << maxi;
    return 0;
}

void analizar() {
    mini = k;
    while (!infect.empty()) {
        int aux = infect.front();
        infect.pop();
        for (int x = 0; x < grafo[aux].envios.size(); x++) {
            if (infectados[grafo[aux].envios[x]] == false) {
                mini++;
                noinfect.push(grafo[aux].envios[x]);
                infectados[grafo[aux].envios[x]] = true;
            }
        }
    }
    maxi = mini;
    while (!noinfect.empty()) {
        int aux = noinfect.front();
        noinfect.pop();
        for (int x = 0; x < grafo[aux].envios.size(); x++) {
            if (infectados[grafo[aux].envios[x]] == false) {
                maxi++;
                noinfect.push(grafo[aux].envios[x]);
                infectados[grafo[aux].envios[x]] = true;
            }
        }
    }
}