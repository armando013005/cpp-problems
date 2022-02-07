#include<iostream>
using namespace std;
int main(){
    int gente,edad,edad_m;
    cin>>gente;
    for(int i=0;i<gente;i++){
        cin>>edad;
        if(edad>edad_m){
            edad_m=edad;
        }
    }
    cout<<edad_m;
return 0;
}
