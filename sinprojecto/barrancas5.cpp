#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int m,k,mayor=0;
    cin>>m>>k;
    int n[m];int l[m]={};
    for(int i=1;i<=m;i++){
        cin>>n[i];
    }
    for(int i=1;i<=m;i++){
        for(int j=i;j<i+k-1;j++){
            l[i] += n[j+1] - n[j];
        }
    }
    for(int i=0;i<m-k+1;i++){
        mayor= max(l[i],mayor);

    }
    cout<<mayor;

    return 0;
}