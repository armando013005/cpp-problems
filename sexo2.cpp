#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,pos,med;
    cin>>N;
    int A[N];
    int o[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
        o[i]=A[i];
    }
    sort(A,A+N);
    pos=N/2;
    med=A[pos];
    for(int i=0;i<N;i++){
        if(med==o[i]){
            pos=i;
            break;
        }
    }
    cout<<med<<" "<<pos;
return 0;
}
