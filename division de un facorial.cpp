#include<bits/stdc++.h>
using namespace std;
int n,m,res;
int sacarFactorial(int c){
    if(c==0){
        return 1;
    }else{
        return c * sacarFactorial(c-1);
    }


}
int main(){

    cin>>n>>m;
    res=sacarFactorial(n)/sacarFactorial(m);
    cout<<res;
return 0;
}
