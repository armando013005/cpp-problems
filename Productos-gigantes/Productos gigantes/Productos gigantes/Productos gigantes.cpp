/********************************************************************
*
* https://omegaup.com/arena/problem/Productos-gigantes
* 87%
* 
*********************************************************************/
#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <stdexcept>  
#include <algorithm>
using namespace std;

vector<int> v;
stack<int> abajo;

vector<int> SepararStringToInt(int k) {
	auto s = to_string(k);
	vector<int>numeros;
	for (auto n : s) {
		int i = n - '0';
		numeros.push_back(i);
	}
	reverse(numeros.begin(), numeros.end());
	return numeros;
}

vector<int> muliplicar() {
	vector<int> producto;
	queue <int> sobrasM;
	queue<int> sobraS;

	bool Hay = true;
	bool pusha = false;
	//producto.resize(1);
	int size = abajo.size();
	int a = 0, num = 0;

	for (int n = 0; n < size; n++) {

		int i = 0 + a;

		for (auto m : v) {
			//fase multiplicacion
			int k = m * abajo.top();

			if (!sobrasM.empty()) {
				k += sobrasM.front();
				sobrasM.pop();
			}

			if (k >= 10) {
				vector <int> numeros = SepararStringToInt(k);
				k = numeros[0];
				sobrasM.push(numeros[1]);
			}



			//fase suma


			try {
				producto.at(i);
			}
			catch (const out_of_range& orr) {
				if (!sobraS.empty()) {
					k += sobraS.front();
					sobraS.pop();
				}
				producto.push_back(k);
				Hay = false;
			}

			if (Hay) {

				int suma = k + producto[i];

				if (!sobraS.empty()) {
					suma += sobraS.front();
					sobraS.pop();

				}

				if (suma >= 10) {
					vector <int> numeros = SepararStringToInt(suma);
					suma = numeros[0];
					sobraS.push(numeros[1]);
				}
				producto[i] = suma;
			}


			i++;
			Hay = true;
		}
		if (!sobrasM.empty()) {
			if (!sobraS.empty()) {
				int m = sobraS.front() + sobrasM.front();
				producto.push_back(m);
				sobrasM.pop();
				sobraS.pop();
			}
			else {
				producto.push_back(sobrasM.front());
				sobrasM.pop();
			}
		}
		a++;
		abajo.pop();

	}

	reverse(producto.begin(), producto.end());

	return producto;
}


int main() {

	string numero1;
	string numero2;

	cin >> numero1 >> numero2;

	for (auto n : numero1) {
		int i = n - '0';
		v.push_back(i);
	}

	for (auto n : numero2) {
		int i = n - '0';
		abajo.push(i);
	}

	reverse(v.begin(), v.end());

	vector <int> producto = muliplicar();

	for (auto n : producto)
	{
		cout << n;
	}
}