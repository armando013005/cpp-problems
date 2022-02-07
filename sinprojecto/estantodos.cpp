#include<bits/stdc++.h>
using namespace std;
int matriz[15][15],Cobach,CecyteEsperanza,Cecyte24,Dgeti,Cbtis37;
void mayor(){
    int n=0;//mayor
    string mayor1="";
            if(n<Cobach){
                n=Cobach; mayor1="Cobach";
            }
                if(n<CecyteEsperanza){
                    n=CecyteEsperanza;mayor1="CecyteEsperanza";
                }
                    if(n<Cecyte24){
                        n=Cecyte24;mayor1="Cecyte24";
                    }
                        if(n<Dgeti){
                            n=Dgeti;mayor1="Dgeti";
                        }
                            if(n<Cbtis37){
                                n=Cbtis37;mayor1="Cbtis37";
                            }
    cout<<' '<<mayor1;
}
void contadordealumnos(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(matriz[i][j]<=12&&matriz[i][j]>=1){
                Cobach++;
            }
                if(matriz[i][j]>=13&&matriz[i][j]<=30){
                    Cbtis37++;
                }
                    if(matriz[i][j]>=31&&matriz[i][j]<=40){
                        CecyteEsperanza++;
                    }
                        if(matriz[i][j]>=41&&matriz[i][j]<=46){
                            Cecyte24++;
                        }
                            if(matriz[i][j]>=47&&matriz[i][j]<=55){
                                Dgeti++;
                            }
        }
    }
    int aux=Cobach+Cbtis37+CecyteEsperanza+Cecyte24+Dgeti;
    if(aux==0){
        cout<<"No existe algun estudiante dentro de esta aula";
    }else{
        cout<<aux; mayor();
    }
}
int main(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>matriz[i][j];
        }
    }
    contadordealumnos();
return 0;
}
