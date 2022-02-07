#include<iostream>
using namespace std;
int mem[1000];
int memneg[1000];
int funcion(int n){
    if (abs(n)==25){
        return 1;
    }else if(n==0){
           return -1109825406;
    }else if (n==1){
        return -298632863;
    }else if(n<0){
      if(memneg[abs(n)]==abs(n)){
        return memneg[abs(n)];
      }else{
        memneg[abs(n)] = funcion(n-1) + funcion(1-n);
        return memneg[abs(n)];
      }
    }else if(n>0){
        if(mem[n]==n){
            return mem[n];
        }else{
            mem[n]= funcion(n+1) + funcion(-n);
            return mem[n];
        }
    }
}
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    cout<<funcion(n);
    return 0;

}
