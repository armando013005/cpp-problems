// costales.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <vector>
using namespace std;

vector <int> naranjasV;
int main() {

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int cos_f = 0, n, m, ph;
    cin >> n;
    bool costales[1005] = {}, naranjas[1005] = {};

    for (int i = 0; i < n; i++) {
        cin >> ph;
        if (!naranjas[ph])naranjasV.push_back(ph);
        naranjas[ph] = true;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> ph;
        costales[ph] = true;
    }
    for (auto na : naranjasV) {
        if (!costales[na]) {
            cos_f++;
        }
    }
    cout << cos_f;
    return 0;
}