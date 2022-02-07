#include <bits/stdc++.h>
using namespace std;
long long int n,k,a[1000000],costo=0,max_=0;
bool hay=false;
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=k){
            hay=true;
        }
    }
        if(hay==true){
            for(int i=0;i<n;i++){
                if(a[i]>=k){
                    costo+=k;
                }else{
                    costo+=a[i];
                }
            }
        }else{
            for(int i=0;i<n;i++){
                costo+=a[i];
                max_= max(max_ , a[i]);
            }
            costo-=max_;
            costo+=k;
        }
    cout<<costo;
    return 0;
}

