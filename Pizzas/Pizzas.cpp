/****************************************************************
* 
* https://omegaup.com/arena/OSI-2022-Previa/?fromLogin=#problems/pizzas
* 100
* 
***************************************************************/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int p, c, g, pizzas;
    cin >> p >> c >> g;
    pizzas = g;
    p = p - pizzas;
    if (c % 2 == 0) {
        pizzas += c / 2;
    }
    else {
        pizzas += (c / 2) + 1;
        p -= 2;
    }
    if (p > 0 && p % 4 == 0) {
        pizzas += p / 4;
    }
    else if (p > 0) {
        pizzas += (p / 4) + 1;
    }
    cout << pizzas;
    return 0;
}