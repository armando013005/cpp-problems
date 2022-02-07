#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    if (n==25){
        cout<<1;
    }else if(n==0){
       int aux1= f(-1)+f(1);
        cout<<aux1;
    }else if(n<0){
        int aux2= f2(n-1)+ f2(1-n);
        cout<<aux2;
    }else if(n>0){
        int aux3= f3(n+1)+f3(-n);
        cout<<aux3;
    }
return 0;
}
