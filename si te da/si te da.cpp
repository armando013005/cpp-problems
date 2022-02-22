/**********************************************************************************************************************
* 
* https://omegaup.com/arena/problem/siteda
* 100%
* 
***********************************************************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int a, b, n, m;
    cin >> a >> b;
    vector<int>w;
    w.push_back(a);
    w.push_back(b);
    n = a + b;
    m = b + n;

    while (!(n == a && m == b)) {
        if (n > 9) {
            n = n % 10;
        }
        if (m > 9) {
            m = m % 10;
        }
        w.push_back(n);
        w.push_back(m);
        n += m;
        m += n;
        if (n > 9) {
            n = n % 10;
        }
        if (m > 9) {
            m = m % 10;
        }
    }
    w.push_back(n);
    w.push_back(m);
    for (auto c : w) {
        cout << c << ' ';
    }
    cout << '\n' << w.size()-2;
    return 0;
}