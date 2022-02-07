#include<bits/stdc++.h>
using namespace std;
int arr[100002],ll[100002];
int busqbin(int x,int inicio, int fin,int i){
    while(inicio<fin){
        int mitad=(inicio+fin)/2;
        if(arr[mitad]>=x){
            fin=mitad;
        }else{
            inicio=mitad+1;
        }
    }  
    if(arr[inicio]==x){
        cout<<inicio<<' ';
        return x;
    }else{
        cout<<0<<' ';
        return -1;
    }
}
int main(){
    int m,n;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ll[i];
        busqbin(ll[i],0,m-1,i);
    }
    return 0;
}
