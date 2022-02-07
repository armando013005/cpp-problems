#include <bits/stdc++.h>
using namespace std;
int n;
char palabra[31];
int posision=0;
int mayor=-1;
int cubeta[31];
int main(){
    cin>>n;
    cin.ignore();
    gets(palabra);
    for(int i=0;i<n;i++){
        int aux2=(int)palabra[i]-97;
        cubeta[aux2]++;
    }
    for(int i=0;i<28;i++){
        if(cubeta[i]>mayor){
            mayor=cubeta[i];
            posision=i;
        }
    }
    posision+=97;
    char aux=(char)posision;
    cout<<aux;
    return 0;
}
