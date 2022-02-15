/****************************************************************
*
* https://omegaup.com/arena/problem/Digitos-poderosos-cpp
* 
* 95.24%
*
******************************************************************/
#include <iostream>
#include <string>

using namespace std;
int buffer[1000005];
string digitos(string n) {
	string x = "0";
	if (n.size() > 1) {
		int res = 0;
		for (auto c : n) {
			int num = c - '0';
			res += num;
		}
		if (res < 1000000) {
			if (buffer[res] > 0) {
				x = to_string(buffer[res]);
			}
			else {
				buffer[res] = res;
				x = to_string(res);
			}
		}
		else {
			x = to_string(res);
		}
		if (x.size() > 1) {
			x = digitos(x);
		}
	}
	else {
		x = n;
	}
	return x;
}

int main() {

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, ni;
	string x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m = 0;
		cin >> x >> ni;
		for (int j = 0; j < x.size(); j++) {
			m += (x[j] - '0') * ni;
		}
		cout << digitos(to_string(m)) << '\n';
	}

	return 0;
}