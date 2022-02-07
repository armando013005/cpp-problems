
#include<iostream>
using namespace std;
int main(){
    int n,N[110],a=1,b=102,cont=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>N[i];
    }
    for(int i=n;i>0;i--){
        if(N[i]>a){
            a=N[i];
        }
        if(N[i]<b){
            b=N[i];
        }
    }
    for(int i=1;i<=n;i++){
        if(N[i]==a){
            cont++;
        }
    }

    cout<<b<<' '<<cont<<' ';
    return 0;
}
