#include<iostream>
using namespace std;
/*Hacer un programa para que la computadora
 pida 10 y al final me diga cuantos son pares
*/
int main(){
    int par=0;
    for(int i=1; i<=10; i++){
        if(i%2==0){
            par++;
        }
    }
    cout<<"numero de pares "<<par;
    return 0;
}
