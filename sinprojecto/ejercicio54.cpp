#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; bool p=1;
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
                p=0;
            cout<<"NO";
            break;
        }else{
            p=1;
        }
    }
    if (p==1){
        cout<<"SI";
    }
    return 0;
}
