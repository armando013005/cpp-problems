#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k, p; // n Puebla m Chihuahua k Guanajuato
    //  3  3  2
    cin>>n>>m>>k;

    p = k; //2

    n -= k; //1

    if ( m%2 == 0 ){
        p += (m/2);
    } else {
        p += (m/2)+1;
        n-=2; //2.5 == 2+2=4
    }

    if ( n%4 == 0 ){
        p += (n/4);
    } else {
        p += (n/4)+1;
    }

    cout<<p;

    return 0;
}
