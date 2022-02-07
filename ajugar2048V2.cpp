#include<bits/stdc++.h>
using namespace std;
int arr[1008];
int main(){
    queue <int> d;
    int n,num,pos=1;
    arr[0]=2049;

    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>num;
        d.push(num);
    }

    while( !d.empty() ){
        arr[pos]=d.front();
        d.pop();

        while(true){
            if(arr[pos]==arr[pos-1]){
                arr[pos-1]=arr[pos]+arr[pos-1];
                pos--;
            }else{
                pos++;
                break;
            }
        }
    }
         pos--;
        cout<<pos<<'\n';
    for(int i=pos;i>=1;i--){
        cout<<arr[i]<<'\n';
    }
    return 0;
}

