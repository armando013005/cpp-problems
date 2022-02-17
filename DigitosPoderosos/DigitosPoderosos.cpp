/****************************************************************
*
* https://omegaup.com/arena/problem/Digitos-poderosos-cpp
* 
* 100%
*
******************************************************************/
#include <iostream>
#include <string>

using namespace std;

string digitos(string n) {
	string x = "0";
	if (n.size() > 1) {
		unsigned long long int res = 0;
		for (auto c : n) {
			int num = c - '0';
			res += num;
		}

		x = to_string(res);

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

	unsigned long long int n, ni;
	string x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		unsigned long long int m = 0;
		cin >> x >> ni;

		x = digitos(x);
		m = stoi(x) * ni;
		cout << digitos(to_string(m)) << '\n';
	}

	return 0;
}

/*
*****************************************************************
*
* https://omegaup.com/arena/problem/Digitos-poderosos-cpp
* 
* 100%
* moroni
******************************************************************
#include <iostream>

using namespace std;

unsigned long long int x,y,tot;

void reducir();

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int c;
	cin>>c;
	for(int j=0;j<c;j++){
		cin>>x>>y;
		reducir();
		x=x*y;
		reducir();
		cout<<x<<'\n';
	}
	return 0;
}

void reducir(){
	while(x>=10){
		tot=0;
		while(x>0){
			tot+=x%10;
			x/=10;
		}
		x=tot;
	}
}
*/