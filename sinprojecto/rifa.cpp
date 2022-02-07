#include<bits/stdc++.h>
using namespace std;
int main (){
    long int suma=0;
    int N,M;
    cin>>N;
    for (int i=1;i<=N;i++){
        cin>>M;
        for(int j=0;j<=M;j++){
            suma+=j;
        }
    }
    cout<<suma;
return 0;
}
