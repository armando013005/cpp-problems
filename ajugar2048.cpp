#include <iostream>
#include <stack>
using namespace std;
stack<int> pila;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      while(!pila.empty() && pila.top() == x) {
        pila.pop();
        x = x + x;
      } 
      pila.push(x);
    }

    cout << pila.size() << "\n";

    while(!pila.empty()) {
      cout << pila.top() << "\n";
      pila.pop();
    }
  
    return 0;
}