#include<bits/stdc++.h>
using namespace std;
int A[]={0,2,4,6,8,10,12,14};
int b_bin(int ini, int fin, int x){
    while(ini!=fin){
          int md = (ini + fin)/2;

          if(A[md] >= x){
               fin = md;
          }else{
               ini = md + 1;
          }
     }

     if(A[ini] == x){
        cout<<"encontrado";
        return ini;
     }else{
         cout<<"-1";
        return -1;
     }

}
int main(){
    int N=8,x;

    cout<<"Numero a buscar: ";
    cin>>x;
    b_bin(0, N, x);

return 0;
}
