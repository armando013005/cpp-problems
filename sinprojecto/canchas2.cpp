#include<bits/stdc++.h>
using namespace std;
bool mt[11000][11000];
int cont;
int main(){
   for(int k=0;k<2;k++){
       int x1,y1,x2,y2;
       cin>>x1>>y1>>x2>>y2;
       for(int i=y1;i<=y2;i++) {
           for(int j=x1;j<=x2;j++){
               if(mt[i][j]==true){
                   cont--;
               }else{
                    cont++;
                    mt[i][j]=true;
               }
           }
       }
   }
for(int i=0;i<100;i++) {
    for(int j=0;j<100;j++){
        cout<<mt[i][j];
    }
    cout<<'\n';
}
    cout<<cont;
    return 0;
}
