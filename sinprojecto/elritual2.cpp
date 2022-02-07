#include<bits/stdc++.h>
using namespace std;
queue <int> M[100005];
int m, n, k,a,b,c;
char N;
void FF(){
    cin>>a>>b;
    M[b].push(a);
}
void RR(){
    cin>>c;
    for(int i=0;i<=!M[c].empty();i++){
        cout<<M[c].front()<<'\n';
        M[c].pop();
    }
}
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin>>m>>n>>k;
    for(int i=0;i<k;i++){
        cin>>N;
        switch(N){
            case 'F':
                FF();
                break;
            case 'R':
                RR();
                break;
        }

    }
    return 0;
}
