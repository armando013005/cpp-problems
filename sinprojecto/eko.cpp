#include <iostream>
using namespace std;
long long int N, M, arboles[1000002];

long long int cortar_arboles(long long int altura, long long int suma) {
  for(int i = 0; i < N; i++) {
    if(arboles[i] > altura) {
      suma += arboles[i] - altura;
    }
  }
  return suma;
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> N >> M;

  long long int max_arbol = 0;
  for(int i = 0; i < N; i++) {
    cin >> arboles[i];
    max_arbol = max(max_arbol, arboles[i]);
  }
    long long int lo = 1, hi = max_arbol, max_altura = 0;
    while(lo <= hi) {
    long long int med = (lo + hi) / 2;
    if(cortar_arboles(med, 0) >= M) {
      lo = med + 1;
      max_altura = max(max_altura, med);
    } else {
      hi = med - 1;
    }
  }

  cout << max_altura;

  return 0;
}
