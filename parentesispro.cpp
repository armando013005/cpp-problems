#include<bits/stdc++.h>
using namespace std;
stack<char> s;
char p[10000002];
int n;
int main(){
    gets(p);
    n=strlen(p);
    for(int i=0;i<n;i++){
        if(p[i]=='('||p[i]=='{'||p[i]=='['||p[i]=='<'){
            s.push(p[i]);
        }else{
            if(s.empty()){
                cout<<"no balanceada";
                return 0;
            }else{
                if(s.top()=='('&&p[i]==')'||s.top()=='{'&&p[i]=='}'||s.top()=='['&&p[i]==']'||s.top()=='<'&&p[i]=='>'){
                    s.pop();
                }else{
                    cout<<"no balanceada";
                    exit(-1);
                }
            }
        }
    }
    if(!s.empty()){
        cout<<"no balanceada";
    }else{
        cout<<"balanceada";
    }
    return 0;
}
