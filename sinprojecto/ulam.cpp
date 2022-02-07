#include<iostream>
using namespace std;
int n;
int si(int n){
   if(n==1){
    return 1;
   }else if(n%2==0){
       cout<<n/2<<' ';
     return si(n/2);
   }else{
       cout<<n*3+1<<' ';
    return si(n*3+1);
   }
}
int main(){
    cin>>n;
    cout<<n<<' ';
    si(n);
return 0;
}
