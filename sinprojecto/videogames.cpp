#include<bits/stdc++.h>
using namespace std;
int id_b[1000],id_tienda[1000];
int busqbin(int x, int in,int fin){
    while(in<fin){
        int mitad= (in+fin)/2;
        if(id_tienda[mitad]>=x){
            fin=mitad;
        }else{
            in=mitad+1;
        }
    }
    if(id_tienda[in]==x){
        return in;
    }else{
        return -1;
    }
}
int main(){
    int n, k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>id_tienda[i];
    }
    for(int i=0;i<k;i++){
        cin>>id_b[i];
        cout<<busqbin(id_b[i],0,n)<<' ';
    }

return 0;
}