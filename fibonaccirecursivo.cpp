#include<iostream>
using namespace std;
long long int n;
long long int fibonacci(int n){
    if(n>1){
        int aux=fibonacci(n-1)+fibonacci(n-2);
        return aux;
    }else if (n==0){
        return 0;
    }else if (n==1){
        return 1;
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
        cout<<fibonacci(i)<<' ';
    return 0;
}
