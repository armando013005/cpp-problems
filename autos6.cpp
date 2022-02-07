#include<iostream>
using namespace std;
int main(){
    int n,N[102],carro,cantcarros;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>N[i];
    }
    cin>>carro;
    cantcarros=N[carro]-n;

    return 0;
}
