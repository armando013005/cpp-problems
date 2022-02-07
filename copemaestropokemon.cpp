#include<bits/stdc++.h>
using namespace std;
long long int a1,a2,fibo[17],n;
int arr[1000];
int busqbin(int x,int inicio, int fin){
    while(inicio<fin){
          int mitad=(inicio+fin)/2;
          if(fibo[mitad]>=x){
               fin=mitad;
          }else{
               inicio=mitad+1;
          }
     }
     if(fibo[inicio]==x){
            cout<<fibo[inicio]<<' ';
        return inicio+1;
     }else{
        return -1;
     }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    a1=1;
    a2=1;
    fibo[1]=1;
    for(int i=2;i<=16;i++){
        fibo[i]=a1+a2;
        a1=a2; a2=fibo[i];
    }
    for(int i=1;i<=n;i++){
        busqbin(arr[i],0,n+1);
    }
return 0;
}
