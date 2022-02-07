#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    long long int n,m;
    cin >> n >> m;
    long long int aux = n/m;
    cout<<n%m<<' '<<(n/m)*2;
    return 0;

}

