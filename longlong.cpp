#include <bits/stdc++.h>
using namespace std;

int main()
{
    int precioDeCoche = 87500;
    long long int poblacionMundial = 7700000000;
    int numero=2147483647;
    long long int numerote =9223375775807;
    unsigned long long int megaNumerote=18446744073709551615;
    float tipoFloat=8.12345;  // hasta 5 decimales
    double tipoDouble=34.12345678901234;  // hasta 14 decimales
    // X long double tipoLongDouble=5.12345678901234567;   // hasta 17 decimales
  char caracter='H';
    string cadena="FEDERICO";
    bool booleana="true";

    cout<<"precioDeCoche= "<<precioDeCoche<<endl;
    cout<<"poblacionMundial= "<<poblacionMundial<<endl;
    cout<<"numero= "<<numero<<endl;
    cout<<"numerote= "<<numerote<<endl;
    cout<<"megaNumerote= "<<megaNumerote<<endl;
    cout<<"tipoFloat= "<<tipoFloat<<endl;
    cout<<"tipoDouble= ";
    cout<<fixed<<setprecision(14)<<tipoDouble<<endl;
   //cout<<"tipoLongDouble= ";
    //cout<<fixed<<setprecision(17)<<tipoLongDouble<<endl;

    cout<<"caracter= "<<caracter<<endl;
    cout<<"cadena= "<<cadena<<endl;
    cout<<"booleana= "<<booleana;


    return 0;
}
