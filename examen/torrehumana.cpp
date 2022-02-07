#include<bits/stdc++.h>
using namespace std;
long long int b,n,mac=100000,suma,mic;
struct cil{
    long long int h;
    long long int w;
}c[100000];
int main(){
    cin>>b>>n;
    for(int i=0;i<b;i++){
        cin>>c[i].h>>c[i].w;
    }
    for(int i=0;i<b;i++){
        for(int j=i;j<b;j++){
            if(suma>=n){
                break;
            }
            suma += c[j].h;
            //cout<<'['<<c[j].w<<']'<<j<<' ';
            mic = max(mic,c[j].w);
        }
        //cout<<mac<<"<>"<<mic<<' ';
        if(suma >= n){
            mac = min(mac,mic);
            mic=0;
        }
        suma = 0;
    }
    cout<<mac;
    return 0;
}
