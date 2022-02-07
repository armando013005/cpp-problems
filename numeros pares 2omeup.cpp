#include<iostream>
using namespace std;
int main(){
    int n,n2,par=0;
    cin>>n;cin>>n2;
    for(int i=n+1;i<=n2-1;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
