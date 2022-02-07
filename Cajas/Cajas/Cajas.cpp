/*******************************************************
*   
*   https://omegaup.com/arena/problem/OMI-2020-Cajas#problems
*   61%
*   
*********************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int v[1000000];

int main() {
    int n, ni;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ni;
        v[i] = ni;
    }

    sort(v, v + n);

    vector <int> altura;
    int columnas = 0;
    int maxh = 1;
    for (int i = 0; i < n; i++) {

        if (altura.empty()) {
            altura.push_back(1);
            continue;
        }

        for (int j = 0; j < altura.size(); j++) {

            if (v[i] >= altura[j]) {
                altura[j]++;
                break;
            }
            else if (j == altura.size() - 1) {
                altura.push_back(1);
                break;
            }
        }


    }

    cout << altura.size();
    return 0;
}