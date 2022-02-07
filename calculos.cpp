#include<bits/stdc++.h>
using namespace std;

int a,b,n;
bool memo[1000000];

struct calculadora {
    int num,cont;
};
queue<calculadora> cola;

int bfs() {
    while(!cola.empty()) {
        int numero,c;
        calculadora Actual=cola.front();
        cola.pop();
        numero=Actual.num;
        c=Actual.cont;
        if(numero==n) {
            return c;
        }
        if(memo[numero]==false) {
            memo[numero]=true;
            int x=log10(numero*a);
            if(x+1<=4) {

calculadora Nuevo;
                Nuevo.num=numero*a;
                Nuevo.cont=c+1;
                cola.push(Nuevo);
            }
            if(numero>b) {
                int x=numero/b;
                calculadora Nuevo;
                Nuevo.num=x;
                Nuevo.cont=c+1;
                cola.push(Nuevo);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>a>>b>>n;

    calculadora Inicio;
    Inicio.num = 1;
    Inicio.cont=
Inicio.cont=0;
    cola.push(Inicio);
    cout<<bfs();

    return 0;
}
