#include <bits/stdc++.h>
using namespace std;
queue <char> c;
string mensaje ;
int n, arr[10002],cont=1;
int reve(int b, int e){
    int j=b;
    for(int i=e;i>b;i--){
       mensaje[i]=mensaje[j];
        j++;
    }
}
int main()
{
    getline(cin, mensaje);
    n=mensaje.length();
    for(int i=0;i<n;i++){
        c.push(mensaje[i]);
    }

    for(int i=0;i<n;i++){
        if(c.front()=='('){
            arr[i]=cont; cont++;
            c.pop();
        }else if(c.front()==')'){
            arr[i]==cont; cont--;
            c.pop();
        }
    }
    int k=0;
    while(!c.empty()){
        mensaje[k]=c.front();
        k++;
        c.pop();
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                int aux=arr[i];int aux2=arr[j];
                reve(aux, aux2);
                break;
            }
        }
    }
    return 0;
}
