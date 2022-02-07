#include<bits/stdc++.h>
using namespace std;
int a,N[10002],c,f=0,mayor;
bool encontrado=0;
int main(){
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>N[i];
    }
    cin>>c;
    for(int i=a;i>=1;i--){
        f++;
        if(N[i]==c){
            encontrado=1;
            break;
        }
    }
    if(encontrado==1){
        cout<<f;
    }else{
        cout<<"No existe el auto";
    }
    return 0;
}
