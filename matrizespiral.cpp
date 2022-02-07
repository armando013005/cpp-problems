#include <bits/stdc++.h>
using namespace std;
int main(){
    int f,c,mt[110][110],num=1,a=0,b,j=0;
    cin>>c>>f;
    b=f-1;
while(j<=c||j<=f){
    for(int i=a;i<=b;i++){
        mt[a][i]=num++;
    }
    for(int i=a+1;i<=b;i++){
        mt[i][b]=num++;
    }
    for(int i=b-1;i>=a;i--){
        mt[b][i]=num++;
    }
    for(int i=b-1;i>=a+1;i--){
        mt[i][a]=num++;
    }
    a++; b--;j++;
}



    for(int i=0;i<c;i++){
        for(int j=0;j<f;j++){
            cout<<mt[i][j]<<' ';
        }
        cout<<'\n';
    }
return 0;
}
