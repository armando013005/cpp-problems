#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,k,va; bool si=0;
    cin>>N;
    int numeros[N];
    for(int i=0;i<N;i++){
        cin>>numeros[i];
    }
    cin>>k;
    for(int i=0;i<N;i++){
        if(k==numeros[i]){
            si=1;
            va=i;
            break;
        }
    }
    if(si==1){
        cout<<va;
    }else{
        cout<<"NO";
    }
return 0;
}
