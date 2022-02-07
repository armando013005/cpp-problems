#include<iostream>
using namespace std;
int n,b,arr[22],resta,s;
void dafun(){
    resta=s-b;
    for(int i=1;i<=n;i++){
        if(arr[i]<=resta){
            resta=arr[i];
        }
    }
    cout<<resta;
}
void chiquito(){
    for(int i=1;i<=n;i++){
        s=s+arr[i];
    }
    if(s==b){
        cout<<'0';
    }else{
        dafun();
    }
}
int main()
{
    cin>>n>>b;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    chiquito();
    return 0;
}
