#include <bits/stdc++.h>
using namespace std;
vector <int> c;
void criba(int n){
    for (int i=2; i<n; i++){
        for (int j=2; i*j<n; j++){
            if(j%i==0){
                continue;
            }else{
                cout<<j<<"\n";
            }
        }           
    }    
}
int busqbin(int x,int ini, int fin){
    while(ini<fin){
        int mitad =(ini+fin)/2;
        if(c[mitad]>=x){
            fin=mitad;
        }else{
            ini=mitad+1;
        }
    }
    if(c[ini]==x){
        cout<<"SI\n";
        return ini;
    }else{
        cout<<"NO\n";
        return -1;
    }
}
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    long long int n,m;
    cin>>n;
    criba(n);
    /*for(long long int i=0; i<n; i++){
        cin>>m;
        busqbin(m,0,100000);
    }*/
    return 0;
}
