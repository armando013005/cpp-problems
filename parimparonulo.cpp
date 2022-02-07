#include <iostream>
using namespace std;
int main( ){
    int A;
    cin>>A;
    if(A==0){
        cout<<"CERO";
    }else if(A%2==0){
        cout<<"PAR";
    }else{
        cout<<"IMPAR";
    }
    return 0;
}
