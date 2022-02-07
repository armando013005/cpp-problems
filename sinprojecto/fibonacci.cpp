#include<bits/stdc++.h>
using namespace std;
unsigned long long int a1,a2,fibo,n;
void fibonacci(){
    for(int i=3;i<=n;i++){
        fibo=a1+a2;
        fibo = fibo % 1000000007;
        a1=a2; a2=fibo;
    }
    cout<<fibo;
}
int main(){
    cin>>a1>>a2>>n;
    fibonacci();
return 0;
}