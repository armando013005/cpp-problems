#include <bits/stdc++.h>
using namespace std;
bool mt[100][10000000];
int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
   int n,m,k;
   cin>>k;
   int pog[10000];
   bool t=true; int taxi=1,canttaxis=0;
   for(int i=0; i<k; i++){
        cin>>n>>m;
        while(t){
            if(mt[taxi][n]==0 && mt[taxi][m]==0){
                for(int ii=n; ii<=m; ii++){
                    mt[taxi][ii] = 1;
                    t=false;
                }
            }else{
                taxi++;
            }
        }
        canttaxis= max(taxi,canttaxis);
        pog[i]=taxi;
        taxi=1;
        t=true;
   }
   cout<<canttaxis<<'\n';
   for(int i=0; i<k; i++){
        cout<<pog[i]<<' ';
   }
    return 0;
}
