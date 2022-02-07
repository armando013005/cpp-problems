#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string soxo[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>soxo[i];
    }
    reverse(soxo ,soxo + n);
    for(int i=0;i<n;i++){
        string aux=soxo[i];
        int tam=aux.size();
        cout<<aux[0]<<aux[tam-1]<<'\n';
    }
    return 0;
}
