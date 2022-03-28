#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct nodo {
	vector<int> cone;
};

nodo grevfo[110];

bool vis[110];

int n, e, t, total = 0;

int revbuscarA(int x, int pasos) {
	struct obj {
		int nod;
		int paso;
	};
	int tot = 0;
	queue <obj> cola;
	obj s = { x,0 };
	cola.push(s);

	while (!cola.empty()) {
		obj a = cola.front();
		int node = a.nod;
		int d = a.paso;
		cola.pop();

		if (!vis[node]) {
			if (d < pasos && node != x) {
				tot++;
			}
		}
		vis[node] = true;

		for (auto hijo : grevfo[node].cone) {
			if (!vis[hijo]) {
				obj aux = { hijo, d + 1 };
				cola.push(aux);
			}
		}
	}

	return tot;
}
int main() {

	cin >> n >> e >> t;
	for (int i = 0; i < e; i++) {
		int a, b;
		cin >> a >> b;

		grevfo[b].cone.push_back(a);
		grevfo[a].cone.push_back(b);
	}

	cout << revbuscarA(n, t);
	return 0;
}