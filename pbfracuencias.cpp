#include<bits/stdc++.h>
using namespace std;
int pelotas,mayor,colores[1002],cubeta[1002];
int main(){
    cin>>pelotas>>mayor;
    for(int i=0;i<=mayor-1;i++){
        cin>>colores[i];
    }
    for(int i=0;i<=mayor-1;i++){
        cubeta[colores[i]]++;
    }
    for(int i=1;i<=mayor;i++){
        cout<<i<<": "<<colores[i]<<'\n';
    }
return 0;
}
