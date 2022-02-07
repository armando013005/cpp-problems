#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string soxo[110000];
    cin>>n;
    for(int i=0;i<n;i++){
        getline(cin,soxo);
    }
    for(int i=n;i>0;i--){
        cout<<soxo[i][0]<<soxo[i].size()-1<<'\n';
    }

    return 0;
}
