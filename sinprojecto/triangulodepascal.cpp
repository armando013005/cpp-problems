#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin >> n;
    for (int i = 1; i <= n+1; i++){
        long long int pas = 1;
        for (int j = 1; j <= i; j++){
            cout << pas << ' ';
            pas = pas * (i - j) / j;
        }
        cout << '\n';
	}

	return 0;
}
