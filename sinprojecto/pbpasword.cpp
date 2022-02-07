#include <bits/stdc++.h>
using namespace std;
char pass[105];
bool vocal=false;
bool nocaraciguales=true;
bool docenum=false;
bool numericos=false;
int n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>pass[i];
    }
    if(n<12){
        cout<<"INSEGURO";
        return 0;
    }
    for(int i=0;i<n;i++){
        if(pass[i]=='a'||pass[i]=='A'||pass[i]=='e'||pass[i]=='E'||pass[i]=='i'||pass[i]=='I'||pass[i]=='o'||pass[i]=='O'||pass[i]=='u'||pass[i]=='U'){
            vocal=true;
        }
        if(pass[i]==pass[i+1]){
            nocaraciguales=false;
        }
        if(isdigit(pass[i])){
            numericos=true;
        }
    }
    if(vocal==true && nocaraciguales==true && numericos==true){
        cout<<"SEGURO";
    }else{
        cout<<"INSEGURO";
    }
    return 0;
    
}
