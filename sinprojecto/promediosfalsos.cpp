#include <bits/stdc++.h>
using namespace std;
int mt[105][8];
int f,c=6;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin>>f;
    for(int i=1;i<=f;i++){
        for(int j=1;j<=c;j++){
            cin>>mt[i][j];
        }
    }
     for(int i=1;i<=f;i++){
        for(int j=1;j<=5;j++){
            int suma = suma + mt[i][j];
            if(j==5){
                if(suma/5==mt[i][6]){
                    suma=0;
                    continue;
                }else{
                    cout<<i<<" "<<suma/5<<'\n';
                }
                suma=0;
            }
        }
    }
    return 0;
}
