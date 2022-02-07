#include<iostream>
using namespace std;
int main(){
    int r, s, b,a=0, p=0, se=0;
    cin>>r;cin>>s;cin>>b;
    a=r*s;
    p=b-a;
    se=b-p;
    cout<<se<<" "<<p;
    return 0;
}
