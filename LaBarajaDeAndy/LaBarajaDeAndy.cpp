/****************************************************************************************
* 
* https://omegaup.com/arena/problem/La-baraja-de-Andy-c/
* 
* 100%
* 
****************************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

unsigned long long int factorial(unsigned long long int n) {

	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	unsigned long long int n;
	std::cin >> n;
	cout << factorial(n);
	return 0;
}