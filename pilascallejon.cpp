#include<bits/stdc++.h>
using namespace std;
stack <int> s;
bool hay=0;
int n,c,se,o;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>se;
        s.push(se);
    }
    cin>>c;
    for(int i=n;i>=1;i--){
        o++;
        if(s.top()==c){
            hay=1;
            break;
        }else{
            s.pop();
            hay=0;
        }
    }
    if(hay==0){
        cout<<"No existe el auto";
    }else{
        cout<<o;
    }

    return 0;
}