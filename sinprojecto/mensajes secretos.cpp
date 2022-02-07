#include <bits/stdc++.h>
using namespace std;
queue <char> c;
string mensaje ;
int n, arr[10002], pos1[10002],pos[10002],cont=1;
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
        }
        if(c.front()==')'){
            arr[i]==cont; cont--;
            c.pop();
        }
    }
    int k=0;
    while(!c.empty()){
        mensaje[k]=c.front();
        c.pop();
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                reverse(mensaje + arr[i],mensaje + arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<mensaje[i];
    }
    return 0;
}
