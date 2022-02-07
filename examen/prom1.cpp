#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long long int n,h,d;
    cin>>n;
    long long int maximo=0,madis=0,maximo2do=0,madis2=0;
    for(int i=0; i<n; i++){
        cin>>d>>h;
        if(h>maximo || h == maximo){
            maximo2do = maximo;
            madis2 = madis;
            maximo = h;
            madis = d;
        }else{
            if(h>maximo2do && h!=maximo){
                maximo2do = h;
                madis2 = d;
            }
        }
    }
        long long int aux2;
    if(madis2-madis < 0){
        aux2=madis-madis2;
    }else{
        aux2=madis2-madis;
    }
    long long int aux = aux2*maximo2do;
    cout<<aux;
    return 0;
}
