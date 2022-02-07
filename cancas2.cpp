#include<bits/stdc++.h>
using namespace std;
int main (){
    float D,r,canicas;
    cin>>D;
    r=D/2;
    if (r>0&&r<=3){
        canicas=1;
        cout<<canicas;
    }else if(r>3&&r<=8){
        canicas=5;
        cout<<canicas;
    }else if(r>8&&r<10){
        canicas=8;
        cout<<canicas;
    }else if(r>=10&&r<=20){
        canicas=12;
        cout<<canicas;
    }else if(r>20){
        cout<<"Es pelota eso";
    }
    return 0;
}

