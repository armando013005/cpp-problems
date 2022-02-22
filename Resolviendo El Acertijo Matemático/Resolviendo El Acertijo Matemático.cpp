/*********************************************************************
* 
* https://omegaup.com/arena/OSI-2022-Previa/?fromLogin=#problems/Matematico
* 100
* 
**********************************************************************/
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    // TODO: fixme.
    int n, m, o;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> m >> o;
        std::cout << m - o << m + o << '\n';
    }

    return 0;
}