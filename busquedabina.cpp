#include<bits/stdc++.h>
using namespace std;
int arr[10];
int busqbin(int x,int inicio, int fin){
    int mitad=(inicio+fin)/2;
    if(arr[mitad]==x){
        cout<<"encontrado "<<arr[mitad];
        return arr[mitad];
    }else{
        if(arr[mitad]>x){
            return busqbin(x,inicio,mitad);
        }else{
            return busqbin(x,mitad+1,fin);
        }
    }


}
int main(){
    int n,m;
    cout<<"numero por encontrar y tamaño del arreglo: "<<'\n';
    cin>>n>>m;
    cout<<"arreglo:\n";
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    busqbin(n,0,arr[m-1]);
    return 0;
}
