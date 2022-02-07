#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,i=1,ca,rep=0,apr=0;
    cin>>N;
    while(i<=N){
        cin>>ca;
        if(ca>=6){
            apr++;
        }else{
            rep++;
        }
        i++;
    }
    cout<<"total de aprobados: "<<apr;
    return 0;
}
