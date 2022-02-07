#include <iostream>
using namespace std;
int n,m,mt[110][110];
int main(){
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mt[i][j];
        }
    }
    for(int i=m-1;i>=0;i--){
        if(i%2==1)continue;
        for(int j=0;j<n;j+=2){
            cout<<mt[i][j]<<' ';
        }
    }

return 0;
}
