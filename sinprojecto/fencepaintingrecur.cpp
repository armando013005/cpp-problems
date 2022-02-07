#include<bits/stdc++.h>
using namespace std;
long long int n,k;
long long int MCD(long long int a, long long int b)
{
    if (a == 0)
        return b;
    return MCD(b%a, a);
}
int main(){
    cin>>n>>k;
    MCD(n,k);
   return 0;
}
