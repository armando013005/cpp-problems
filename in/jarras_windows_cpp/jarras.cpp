#include "jarras.h"
#include <bits/stdc++.h>
using namespace std;
// Main
//	void verterAgua(int fuente, int destino)
struct jarr{
    int jar1;
    int jar2;
}mt[10000][10000];

void busqex(int obj, int i,int j, int valj1, int valj2, int capa1, int capa2){
    int aux1,aux2;
    if(mt[i][j].jar1 == obj || mt[i][j].jar2 == obj || i < 0 || i > 10 || j < 0 || j > 10){
        if(valj1==obj){
            for(int i=0; i<10; i++){
                for(int j=0; j<10; i++){
                    cout<<'['<<mt[i][j].jar1<<"] {"<<mt[i][j].jar2<<'}';
                }
                cout<<'\n';
            }
            exit(-1);
        }
        if(mt[i][j].jar2 == obj){
            verterAgua(1, 3);
            verterAgua(2, 1);
            exit(-1);
        }
        return;
    }
    mt[i][j].jar1 = valj1;
    mt[i][j].jar2 = valj2;

    verterAgua(0,1);
    aux1=capa1;
    busqex(obj,i-1,j,aux1,valj2,capa1,capa2);

    verterAgua(0,2);
    aux2 = capa2;
    busqex(obj,i+1,j,valj1,aux2,capa1,capa2);

    verterAgua(1,3);
    aux1 = 0;
    busqex(obj,i,j+1,aux1,valj2,capa1,capa2);

    verterAgua(2,1);
    for(int i=1; i <= capa1; i++){
        if(aux1 == capa1||aux2 == 0){
            break;
        }else{
            aux1++; aux2--;
        }
    }
    busqex(obj,i+1,j+1,aux1,aux2,capa1,capa2);

    verterAgua(2,3);
    aux2=0;
    busqex(obj,i,j-1,valj1,aux2,capa1,capa2);


    verterAgua(1,2);
    for(int i=1;i<=capa2;i++){
        if(aux2 == capa2||aux1 == 0){
            break;
        }else{
            aux2++; aux1--;
        }
    }
    busqex(obj,i+1,j-1,aux1,aux2,capa1,capa2);


    verterAgua(2,1);
    for(int i=1;i<=capa1;i++){
        if(aux1 == capa1||aux2 == 0){
            break;
        }else{
            aux1++; aux2--;
        }
    }
    busqex(obj,i-1,j-1,valj1,valj2,capa1,capa2);

    verterAgua(1,2);
    for(int i=1;i<=capa2;i++){
        if(aux2 == capa2||aux1 == 0){
            break;
        }else{
            aux2++; aux1--;
        }
    }
    busqex(obj,i-1,j+1,valj1,valj2,capa1,capa2);

    return;
}

void programa(int objetivo, int capacidadJarra1, int capacidadJarra2) {
    int obj = objetivo, capa1 = capacidadJarra1, capa2 = capacidadJarra2;
    busqex(obj,0,0,0,0,capa1,capa2);

    /*int jarra1=capa1, jarra2=capa2,capa1=capacidadJarra1, capa2=capacidadJarra2;
	if(capacidadJarra1==objetivo){
        verterAgua(0,1);
	}else{
       while(true){
            if(capa1>capa2){
               if(capa1-capa2 == objetivo){
                  verterAgua(0,1);
                  verterAgua(1,2);
                  break;
               }else{
                    while(jarra1 == objetivo){
                       verterAgua(0,1);
                       jarra1=capa1;
                       verterAgua(1,2);
                       jarra2= capa2;
                       jarra1= capa1 - capa2;
                       if(jarra2 == objetivo){

                       }
                    }
               }
            }else if(capa2>capa1){
                if(capa2-capa1 == objetivo){
                  verterAgua(0,2);
                  verterAgua(2,1);
                  verterAgua(1,3);
                  verterAgua(2,1);
                  break;
               }
            }
       }
	}*/
}
