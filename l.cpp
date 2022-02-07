#include<bits/stdc++.h>
using namespace std;
int main (){
    int N1,N2,pos,resta=0;
    cin>>N1>>N2;
    if(N1>N2){
        pos=2;
        resta=N1-N2;
        cout<<pos<<" "<<resta;
    }else if(N1<N2){
        pos=1;
        resta=N2-N1;
        cout<<pos<<" "<<resta;
    }else{
        cout<<"Nivel Optimo";
    }

return 0;
}
