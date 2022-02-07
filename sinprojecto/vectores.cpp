#include<bits/stdc++.h>
using namespace std;
int a,b,c,m,n,k;
struct Cola{
    vector<int> v;
    void push(int n){
        v.push_back(n);
    }
    bool vacio(){
        return v.size()==0;
    }
    void pop(){
        v.erase(v.begin());
    }
    int frente(){
        return v.front();
    }
}; 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin>>m>>n>>k;
    cin.ignore();
    Cola q[m+1];
    for(int i=0;i<k;i++){
        char N;
        cin>>N;
        if(N=='F'){
            cin>>a>>b;
            q[b].push(a);
        }else{
            cin>>c;
            while(!q[c].vacio()){
                cout<<q[c].frente()<<'\n';
                q[c].pop();
            }
        }
    }
    return 0;
}
