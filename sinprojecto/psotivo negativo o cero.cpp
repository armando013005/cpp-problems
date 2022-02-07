#include <bits/stdc++.h>
using namespace std;
int main(){
    int L;
    cin>>L;
    if(L>0 && L<=3){
        cout<<"BEBE";
    }else if(L<=14){
        cout<<"NINO";
    }else if(L<=18){
        cout<<"JOVEN";
    }else if(L<65){
        cout<<"ADULTO";
    }else{
        cout<<"ADULTO 3RA";
    }
    return 0;
}
