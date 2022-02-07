#include<bits/stdc++.h>
using namespace std;
queue <int> q;
queue <int> id;
int n,k,m,t;
void roundRobin(){
    while(!q.empty()&&!id.empty()){
        if(q.front()<=k){
            cout<<id.front()<<'\n';
            q.pop(); id.pop();
        }else{
            q.front()-=k;
            q.push(q.front()); id.push(id.front());
            q.pop(); id.pop();
        }
    }
}

int main (){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>m>>t;
        id.push(m); q.push(t);
    }
    roundRobin();
    return 0;
}
