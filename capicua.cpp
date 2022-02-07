#include <bits/stdc++.h>
using namespace std;
int a[1002],b[1002], n;
bool si=1;
int main( ){
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
        b[n-1-i]=a[i];
    }
    for(int i=0;i<=n-1;i++){
      if(b[i]!=a[i]){
        si=0;
      }
    }
    if(si==1){
        cout<<"SI";
    }else{
        cout<<"NO";
    }
    return 0;
}
