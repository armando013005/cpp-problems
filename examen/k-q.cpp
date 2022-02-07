#include<bits/stdc++.h>
using namespace std;
vector <long long int> v;
bool arr[10000000];
bool esta[10000000];
int main(){
    long long int n,k,q,a;
    cin>>n>>k>>q;
    for(int i = 0; i < n; i++){
        cin>>a;
        v.push_back(a);
    }
    long long int cont=0;
    for(int i=0; i<v.size(); i++){
        if(esta[v[i]]==false){
            for(int j=1; j<=100; j++){
                if(v[i]%j == 0){
                    cont++;
                }
            }
            if(cont >= q){
                arr[v[i]]=true;
            }
            cont=0;
            esta[v[i]]=true;
        }//pass
    }
    cont =0; long long int subarr=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<=(i+n)-2;j++){
            if(arr[v[j]]==true){
                cont++;
                if(cont>=q){
                    subarr++;
                }
            }
        }
        cont=0;
    }
    cout<<subarr;
    return 0;
}
