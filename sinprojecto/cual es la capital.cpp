#include<iostream>
using namespace std;
/*hacer un programa para que la computadora pregunte por
la capital de sonora, y si responde correctamente que imprima CORRECTO
 en caso contrario INCORRECTO
*/
int main(){
    string cap;
    cout<<"Cual es la capital de sonora? "; cin>>cap;
    if(cap=="hermosillo"){
        cout<<"es correcto";
    }else{
        cout<<"es incorrecto";
    }
    return 0;
}
