#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,b,cont=0;
    cin>>N;
    int numeros[N];
    for(int i=0;i<N;i++){
        cin>>numeros[i];
    }
    cin>>b;
    for(int i=0;i<N;i++){
        if(b==numeros[i]){
            cont++;
        }
    }
    cout<<cont;
return 0;
}
