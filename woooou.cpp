#include <bits/stdc++.h>
using namespace std;
int mt[102][102], n,m;
int main(){
   cin>>n>>m;
   for(int i=0; i<n;i++){
    -   for(int j=0;j<m;j++){
           cin>>mt[i][j];
       }
   }
   for(int i=0; i<n;i++){
       for(int j=0;j<m;j++){
           if(i%2==0&&j%2==0){
                cout<<mt[i][j]<<' ';
           }
       }
   }
    return 0;
}
