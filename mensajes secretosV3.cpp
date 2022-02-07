#include <bits/stdc++.h>
using namespace std;
stack <char> c;
char mensaje[10002];
int n,izq,der;
void reversiar(int iz,int de){
    while(iz<de){
        swap(mensaje[iz],mensaje[de]);
        iz++; de--;
    }
}
int main()
{
    gets(mensaje);
    n=strlen(mensaje);
    for(int i=0;i<n;i++){
        if(mensaje[i]=='('){
            c.push(i);
        }else if (mensaje[i]==')'){
            izq=c.top();
            der=i;
            break;
        }
    }
    reversiar(izq+1,der-1);
    for(int i=0;i<n;i++){
        if(mensaje[i]=='('||mensaje[i]==')'){
            continue;
        }else {
            cout<<mensaje[i];
        }
    }
    return 0;
}
