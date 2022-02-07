#include <bits/stdc++.h>
using namespace std;
int f,c,k,mt[110][110],arr[100002],a=0,b=0,i=0,d=0;
int main( ){
    cin>>f>>c>>k;
    int aux[f][1];
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cin>>mt[i][j];
        }
    }


for(int i=0;i<f-1;i++){
    aux[i][0]=mt[i][0];
}
for(int i=0;i<f-1;i++){
    for(int j=0;j<c-1;j++){
        mt[i][j]=mt[j++];
    }
}
for(int i=0;i<f-1;i++){
        mt[i][c-1]=aux[i][0];
}
    for(int i=0;i<c;i++){
        for(int j=0;j<f;j++){
            cout<<mt[i][j]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
