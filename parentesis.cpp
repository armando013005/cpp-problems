#include<bits/stdc++.h>
using namespace std;
stack<char> s;
char p[10000002];
int n;
int main(){
    gets(p);
    n=strlen(p);
    for(int i=0;i<n;i++){
        if(p[i]=='('){
            s.push(p[i]);
        }else{
            if(!s.empty()){
                s.pop();
           }else{
            cout<<"NO";
            return 0;
           }
        }
    }
    if(!s.empty()){
        cout<<"NO";
    }else{
        cout<<"SI";
    }
    return 0;
}
