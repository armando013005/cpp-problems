#include<iostream>
using namespace std;
int k,c,f,n,n1=0,n2=0,n3=0,n4=0,lados,arriba,att,lt,mt[101][101];
void arribaLados(){
        //arriba
        if(n1==n2)
        {
            att=0;
        }else if(n1<n2){
            arriba=n2-n1;
            att= arriba%f;
        }else{
            arriba=n1-n2;
            att= arriba%f;
        }
        //lados
        if (n3==n4)
        {
           lt=0;
        }else if(n3<n4){
            lados=n4-n3;
            lt= lados%c;
        }else{
            lados=n3-n4;
            lt=lados%c;
        }
        if(c==1&&arriba==0){
            lt==0;
            att==0;
        }
        if(f==1&&lados==0){
            lt==0;
            att==0;
        }
}
void contar(){
    for(int i=0;i<k;i++){
        cin>>n;
        if(n==1){
            n1++;
        }else if(n==2){
            n2++;
        }else if(n==3){
            n3++;
        }else{
            n4++;
        }
    }
}
int main(){
    cin>>f>>c>>k;
    contar();
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cin>>mt[i][j];
        }
    }
    arribaLados();
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<mt[att][lt]<<' ';
            lt++;
            if(lt==c){
                lt=0;
            }
        }
        cout<<'\n';
        att++;
        if(att==f){
            att=0;
        }
    }
return 0;
}
