#include <iostream>
using namespace std;
int n;
//función recursiva
int conjetura_de_ULAM(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n % 2 == 0) {
        n = n / 2;
        cout << n<<" ";
        conjetura_de_ULAM(n);
    }
    else{
        n = n * 3 + 1;
    cout << n<<" ";
    conjetura_de_ULAM(n);
    }
}
int main()
{
    //entrada
    cin >> n;
    //salida
    if(conjetura_de_ULAM(n)==1)
   conjetura_de_ULAM(n);
}
