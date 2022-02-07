#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> needed;
    vector<int> current;
    int n,m;
    cin>>n>>m;
    int aux;
    for(int i=0;i<n; i++){
        cin>>aux;
        needed.push_back(aux);
    }
    for(int i=0;i<m;i++){
        cin>>aux;
        current.push_back(aux);
    }
    sort(current.begin(), current.end());
    int pog=0;
    for(int i=0;i<n;i++){
        if(needed[i] <= current[0]){
            pog++;
        }
    }
    cout<<pog;
    return 0;
}