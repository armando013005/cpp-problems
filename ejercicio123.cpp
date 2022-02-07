#include<iostream>
using namespace std;
int main(){
    int num, N,ma=-1000;
    cin>>N;
    for(int i=1; i<=N; i++){
        cin>>num;
        if (num>ma){
            ma=num;
        }
    }
    cout<<ma;
    return 0;
}

