/******************************************************
* 
* https://omegaup.com/arena/OSI-2022-Previa/?fromLogin=#problems/Asteriscos-3
* 100
* 
*******************************************************/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
int main() {
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s(2 * i + 1, '*');
        string a(n - i, ' ');
        cout << a << s << endl;
    }
    return 0;
}