#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    long long int n,m,p,num;
    int cos,res;
    cin>>m>>n>>p;
    for (int i=0;i<p;i++){
        cin>>num;
        cos=num/m; res=num%m;
        if(res==0){
            cout<<cos<<' ';
        }else{
           cout<<n*(m-res)+cos+1<<' ';
        }
    }
    return 0;
}