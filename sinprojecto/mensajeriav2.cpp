#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie();
    int N, K;
    cin >> N >> K;

    int s = 0, max_x = 0, k = 0, x;
    /*
        N--> numero de cuarteles
        K--> costo de la central
        k--> numero de centrales
        s--> costo total
        x--> costo ai
    */


    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x >= K){
            k++;
        } else {
            s += x;
        }
        max_x = max(max_x,
        cout<<"i="<<i<<"  max="<<max_x<<"  s="<<s<<endl;
    }

    if (k)
        cout << s + k * K;
    else
        cout << s - max_x + K;

    return 0;
}
