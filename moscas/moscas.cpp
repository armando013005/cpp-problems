// moscas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct rango
{
    int b = 0;
    int d = 0;
};

rango moscas[20005];

int max_total = 1;
int demografico[60005], mins, mags;

void rellenar(rango mosca) {
    for (int i = mosca.b; i < mosca.d; i++) {
        demografico[i]++;
        max_total = max(max_total, demografico[i]);
    }
}

int main() {

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> moscas[i].b >> moscas[i].d;
        rellenar(moscas[i]);
        mags = max(mags, moscas[i].d);
        mins = min(mins, moscas[i].b);
    }
    vector<rango> res;

    for (int i = mins; i <= mags; i++) {
      //  cout << demografico[i] << ' ';
        if (demografico[i] == max_total) {
            if (res.empty()) {
                res.push_back({i,0});
            }
            else if (res.back().b < 0) {
                res.back().b = i;
            }
            else if(res.back().d > 0) {
                res.push_back({ i,0 });
            }
        }
        else if (!res.empty()) {
            if (res.back().d == 0 && demografico[i-1] == max_total) {
                res.back().d = i ;
            }
        }
        
    }
    cout /* << '\n' */ << max_total << '\n';
    for (auto i: res) {
        //if (i.b == i.d) continue;
        cout << i.b << ' ' << i.d << '\n';
    }
    return 0;
}