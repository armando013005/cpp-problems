#include<bits/stdc++.h>
using namespace std;
struct molde_pila{
    int numeros[100000000];
    int fin=0;
    void push(int num){
        fin++;
        numeros[fin]=num;
    }
    int top(){
        return numeros[fin];
    }
    int tam(){
        return fin;
    }
    void pop(){
        fin--;
    }
};
molde_pila pila;
int main(){
    int n;
    cin>>n;
    pila.push(n);
    cout<<"---top---\n";
    cout<<pila.top()<<'\n';
    cout<<"---tam---\n";
    cout<<pila.tam();
    pila.pop();
    cout<<'\n';
    cout<<"---tam---\n";
    cout<<pila.tam();

return 0;
}
