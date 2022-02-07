#include<bits/stdc++.h>
using namespace std;
int x1,yy1,y3,x3,x2,y2,x4,y4;
int x5,y5,x6,y6,x7,y7,x8,y8;
int area;
bool esqui(){
    //inf derecha areas de los cuadadros chiquitos
    if((x7>x4&&x7<x1) && (y7>y4 && y7<y3)){
        area=(x2-x7)*(x4-x7);
        if(area<0){
            area*=-1;
        }
        return true;
    }
}
int main(){
    //a
    cin>>x4>>y4>>x2>>y2;
    //b
    cin>>x8>>y8>>x6>>y6;
    //cords primer rec
    x1=x2;
    yy1=y4;
    x3=x4;
    y3=y2;
    //cords segundo rec
    x5=x6;
    y5=y8;
    x7=x8;
    y7=y6;
    esqui();
    if(esqui()==true){
        cout<<area<<'\n';
    }
    return 0;
}
