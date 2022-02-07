#include<bits/stdc++.h>
using namespace std;
int main(){
    float c,c1,c2;
    cin>>c>>c1>>c2;
    if(c==c1||c==c2){
        cout<<"Si";
    }else if(c1==c||c1==c2){
        cout<<"Si";
    }else if(c2==c||c2==c1){
        cout<<"Si";
    }else{
        cout<<"No";
    }
    return 0;
}
