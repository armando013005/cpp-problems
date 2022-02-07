#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=100;
    int numeros[5]={5,4,3,2,1};
    cout<<num<<endl;
    cout<<numeros[0]<<endl;
    cout<<numeros[1]<<endl;
    cout<<numeros[2]<<endl;
    cout<<numeros[3]<<endl;
    cout<<numeros[4]<<endl;
    cout<<"sort \n";
    sort(numeros,numeros+5);
    cout<<numeros[0]<<endl;
    cout<<numeros[1]<<endl;
    cout<<numeros[2]<<endl;
    cout<<numeros[3]<<endl;
    cout<<numeros[4]<<endl;
    cout<<"ciclos\n";
    for(int i=0;i<5;i++){
        cout<<numeros[i]<<endl;
    }
return 0;
}
