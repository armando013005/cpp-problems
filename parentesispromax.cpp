#include<bits/stdc++.h>
using namespace std;
stack<char> s;
char p[10000002];
int n, contador=0;
int main(){
    gets(p);
    n=strlen(p);
    for(int i=0;i<n;i++){
        if(p[i]=='('||p[i]=='{'||p[i]=='['||p[i]=='<'){
            s.push(p[i]);
        }else{
            if(s.empty()){
                cout<<"imposible";
                return 0;
            }else{
                if(s.top()=='('&&p[i]==')'||s.top()=='{'&&p[i]=='}'||s.top()=='['&&p[i]==']'||s.top()=='<'&&p[i]=='>'){
                    s.pop();
                }else{
                    contador++;
                    s.pop();
                }
            }
        }
    }
    if(!s.empty()){
        cout<<"imposible";
    }else{
        cout<<contador;
    }
    return 0;
}
