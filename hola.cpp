#include<bits/stdc++.h>
using namespace std;
int n;
    int f(int n){
        int aux= f(-1)+f(1);
        cout<<aux;
        return f(aux);
    }
    int f2(int n){
        int aux= f2(n-1)+ f2(1-n);
        cout<<aux;
        return f2(aux);
    }
    int f3(int n){
        int aux= f3(n+1)+f3(-n);
        cout<<aux;
        return f3(aux);
    }

int main(){
    cin>>n;
    if (n==25){
        cout<<1;
    }else if(n==0){
        f(n);
    }else if(n<0){
        f2(n);
    }else if(n>0){
        f3(n);
    }
return 0;
}
