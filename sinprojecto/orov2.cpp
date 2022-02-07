#include<bits/stdc++.h>
using namespace std;
int n,b,m=100000,arr[25];
void per(int j, int suma){
    for(int i=j+1;i<=n;i++){
        if(suma<b){
            if(suma+arr[i]<b){
                per(i,suma+arr[i]);
            }else if(suma+arr[i]<m){
                    m=suma+arr[i];
            }
        }
    }
}
int main()
{   cin.tie(0);
    cin>>n>>b;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    per(0,0);
    int aux=m-b;
    cout<<aux;
    return 0;
}
