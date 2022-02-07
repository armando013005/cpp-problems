#include<bits/stdc++.h>
using namespace std;
long long int filas,asientos,personas_p,personas_s,boletos,total_a;
int main(){
    cin>>filas>>asientos>>boletos;
    total_a=filas*asientos;
    personas_s=total_a;
    personas_p=boletos-total_a;
    if(boletos<=total_a){
        personas_p=0;
        personas_s=boletos;
    }
    if(personas_p<0){
        personas_p*=-1;
    }
    cout<<personas_s<<' '<<personas_p;
    return 0;
}
