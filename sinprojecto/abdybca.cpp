#include<bits/stdc++.h>
using namespace std;
char abc[8]={""};
long long int n=0,cont=0;
string imp[8];
bool aux[8];
void per(long long int p){
    if(n==p){
        for(int i=0;i<n;i++){
            cout<<imp[i];
        }
        cout<<'\n';
        cont++;
    }
    if(p<n){
        for(int i=0;i<n;i++){
            if(){
                imp[p]=abc[i];
                per(p+1);
            }
        }
    }
}
int main(){
    gets(abc);
    n=strlen(abc);
    per(0);
    cout<<cont;
    return 0;
}

