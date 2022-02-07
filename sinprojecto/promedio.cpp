#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    float c,p,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>c;
        sum=sum+c;
    }
    p=sum/n;
    cout<<fixed<<setprecision(2)<<p;
    return 0;
}