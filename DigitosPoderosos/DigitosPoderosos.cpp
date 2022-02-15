/****************************************************************
*
* https://omegaup.com/arena/problem/Digitos-poderosos-cpp
*
******************************************************************/
#include <iostream>
#include <string>

using namespace std;
int buffer[1000];

string digitos(string n) {
	string x = "0";
	if (n.size() > 1) {
		int res = 0;

		for (auto c : n) {
			int num = c - '0';
			res += num;
		}
		if (buffer[res] > 0) {
			x = to_string(buffer[res]);
		}
		else {
			buffer[res] = res;
			x = to_string(res);
		}
		
		if (x.size() > 1) {
			x = digitos(x);
		}

	}
	else {
		return n;
	}
	return x;
}

int main() {

	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int n, ni;
	string x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string m;
		cin >> x >> ni;
		for (int j = 0; j < ni; j++) {
			m += x;
		}
		cout << digitos(m) << '\n';
	}

	return 0;
}