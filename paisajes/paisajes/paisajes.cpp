/**********************************************************************************************
*   70%
*   https://omegaup.com/arena/problem/Paisajes-de-la-ciudad/
*   TODO: sacar 100%
*
**********************************************************************************************/
#include <iostream>
#include <vector>
using namespace std;
int n, p;
vector<int> v;


int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n;
    int a[6] = { 0 };
    for (int i = 0; i < n; i++) {
        cin >> p;
        v.push_back(p);
    }
    bool rev = false;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (v[i] >= v[j]) {
                a[i]++;
            }
            else {
                break;
            }
        }
        for (int j = i-1; j >= 0; j--) {
            if (v[i] >= v[j]) {
                    a[i]++;
            }
            else  {
                break;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }

    return 0;
}
