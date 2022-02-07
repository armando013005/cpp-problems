#include<bits/stdc++.h>
using namespace std;
queue<int> q;
char aa;
int co,na;
void NN(){
    int chi; cin>>chi;
     q.push(chi+1);
}
void AA(){
    co-=q.front();
    q.pop();
}
void RR(){
    cout<<co<<'\n';
}
void CC(){
    cout<<q.size()<<'\n';
}
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin>>co>>na;
    for(int i=1;i<=na;i++){
        cin>>aa;
        switch(aa){
            case 'N':
                NN();
                break;
            case 'A':
                AA();
                break;
            case 'C':
                CC();
                break;
            case 'R':
                RR();
                break;
        }
    }
    return 0;
}
