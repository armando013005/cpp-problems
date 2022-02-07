#include<bits/stdc++.h>
using namespace std;
int main(){
    int numero,cociente,residuo,suma=0;
    cin>>numero;
    while(numero!=0){
        cociente=numero/10;
        residuo=numero%10;
        numero=cociente;
        suma+=residuo;
    }
    cout<<suma;
    return 0;
}
