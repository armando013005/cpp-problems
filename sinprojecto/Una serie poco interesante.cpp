#include<bits/stdc++.h>
using namespace std;
int  n;
unsigned long long int p;
int main()
{
    cin>>n>>p;
if(n==1){
        if(p%3==1){
            cout<<"3 2";
        } else if(p%3==2){
            cout<<"2 3";
        }  else if(p%3==0){
            cout<<"1 1";
        }
else if(n==2){
        if(p%3==1){
            cout<<"1 3";
        } else if(p%3==2) {
            cout<<"3 1";
        } else if(p%3==0){
            cout<<"2 2";
        }
} else if(n==3){
        if(p%3==1){
            cout<<"2 1";
        } else if(p%3==2){
            cout<<"1 2";
        } else if(p%3==0){
            cout<<"3 3";
        }
    }
}


    return 0;
}
