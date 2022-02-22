#include<iostream>
#include <string>

using namespace std;

int n, k;

string abc;

int n = 0, cont = 0;

string imp;

bool aux[42];


void per(int p) {
    if (n == p) {
        for (int i = 0; i < n; i++) {
            cout << imp[i];
        }
        cout << '\n';
        cont++;
    }
    if (p < n) {
        for (int i = 0; i < n; i++) {
            if (aux[i] == false) {
                aux[i] = true;
                imp[p] = abc[i];
                per(p + 1);
                aux[i] = false;
            }
        }
    }
}
int main() {

    cin >> n >> k;

    per(0);
    cout << cont;
    return 0;
}
