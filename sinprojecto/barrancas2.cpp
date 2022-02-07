#include<bits/stdc++.h>
using namespace std;
int n,k, mayor=0;
int v[50002];
int picos[50002];
int main(){
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n-1; j++){
            if(v[j+1]>v[j]){
                picos[i] += v[j+1] - v[j];
            }else{
                picos[i] -= v[j] - v[j+1];
            }
        }
    }
    for(int i=0; i<k; i++){
        if(picos[i]>mayor){
            mayor=picos[i];
        }
    }
    cout<<mayor;
}
