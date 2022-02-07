#include<bits/stdc++.h>
using namespace std;
int main(){
    int t_c,c_c,t_m,c_m,estrellas,puntas,cuerdas,aros;
    cin>>t_c>>c_c>>t_m>>c_m>>puntas>>aros>>estrellas>>cuerdas;
    long long int ans_medianos= t_m*c_m;
    long long int ans_chicos= t_c*c_c;
    if(puntas>0){
        ans_medianos *=puntas;
        ans_chicos *=puntas;
    }
    if(cuerdas>0){
        ans_medianos *=cuerdas;
        ans_chicos *=cuerdas;
    }
    ans_chicos*=(estrellas+1);
    ans_medianos*=(estrellas+1);
    ans_chicos*=(aros+1);
    ans_medianos*=(aros+1);
    long long int ans = ans_chicos + ans_medianos;
    cout<<ans;
return 0;
}
