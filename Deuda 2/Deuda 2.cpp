/****************************************************************
*
* https://omegaup.com/arena/problem/Deuda-2
* 100
*
***************************************************************/
#include <iostream>

using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	// TODO: fixme.

	float m, n, i, fi, f;

	cin >> i >> n >> m;

	fi = n*( float(i / 100) );
	n += fi;
	for (int s = 0; s < m; s++) {
		cin >> f;
		n = abs(n-f);
	}
	cout << n;
	return 0;
}