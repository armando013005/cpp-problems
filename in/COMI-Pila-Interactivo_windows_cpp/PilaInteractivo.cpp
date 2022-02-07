#include "PilaInteractivo.h"
#include <bits/stdc++.h>
using namespace std;
stack <int> pogu;
void agrega(int n) {
	pogu.push(n);
}

int saca() {
    if(pogu.empty()) return -1;
	int n = pogu.top();
	pogu.pop();
	return n;
}
