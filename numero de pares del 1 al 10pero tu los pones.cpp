#include <iostream>
using namespace std;
int a[1002], n;
bool si=1;
int main( ){
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    for(int i=0;i<=n/2-1;i++){
        for(int j=n/2-1;j>=0;j--){
            if(a[i]!=a[j]){
                si=0;
                break;
            }
        }
    }
    if(si==1){
        cout<<"SI";
    }else{
        cout<<"NO";
    }

    return 0;
}
