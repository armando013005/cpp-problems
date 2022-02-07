#include<iostream>
using namespace std;
int main(){
    int n,m,b=0,a=0;
    cin>>n>>m;
    b=n/m;
    a=n%m;
    if (a==0){
        cout<<b;
    }else{
        cout<<b<<" "<<a<<"/"<<m;
    }
    return 0;
}
