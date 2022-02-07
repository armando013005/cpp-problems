#include <bits/stdc++.h>
using namespace std;
int n, m, mayor=0, x, y;
int mt [1005][1005];
int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=m; ++j) {
            cin>>mt[i][j];
        }
    }
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=m; ++j) {
            if(mt[i][j]>mt[i][j+1]&&
               mt[i][j]>mt[i+1][j+1]&&
               mt[i][j]>mt[i+1][j]&&
               mt[i][j]>mt[i+1][j-1]&&
               mt[i][j]>mt[i][j-1]&&
               mt[i][j]>mt[i-1][j-1]&&
               mt[i][j]>mt[i-1][j]&&
               mt[i][j]>mt[i-1][j+1]
            ){
                x=i; y=j;
                cout<<x<<" "<<y<<'\n';
            }
        }
    }
    return 0;
}
