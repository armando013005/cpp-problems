#include <bits/stdc++.h>
using namespace std;
 int n,k,a[1000000],costo=0;
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=k){
            costo+=k;
        }else{
            costo+=a[i];
        }
    }
    cout<<costo;
    return 0;
}
