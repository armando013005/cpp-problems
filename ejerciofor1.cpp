#include <iostream>
using namespace std;

int main()
{
    int calif, aprob=0, reprob=0;

    for(int i=1; i<=10;i++){
        cout<<"Proporciona una calif: ";cin>>calif;
        if(calif>=60){
            aprob=aprob+1;
        }else{
            reprob=reprob+1;
        }
     }
    cout<<"numero de aprobados "<<aprob<<endl;
    cout<<"numero de reprobados "<<reprob<<endl;

    return 0;
}
