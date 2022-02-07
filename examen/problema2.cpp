#include <bits/stdc++.h>
using namespace std;
int testigos[1003];
int tiem[1003];
int val[1003];
bool esta[1003];
/*bool busqbin(int x,int ini, int fin){
    while(ini < fin){
        int mit = (ini + fin)/2;
        if(x > testigos[mit]){
            ini = mit + 1;
        }else{
            fin = mit;
        }
    }
    if(testigos[ini] == x){
        return 1;
    }else{
        return 0;
    }
}*/
int main(){
    cin.tie(0);
    int t,n,c,ci,dis,ni,ve;
    cin >> t >> n >> c;
    int aux=c;
    int cont = n; int tam=0;
    for(int i=0; i<n; ++i){
        cin >> testigos[i];
    }
    sort(testigos, testigos + n-1);
    for(int i=0; i<c; ++i){
        cin >> ci >> dis >> ve;
            val[i] = ci;
            tam++;
            tiem[i] = dis/ve;
    }
    if(tam == 0 || tam+n < c){
        cout<<"La paz nunca fue una opcion";
        return 0;
    }
    if(cont == t){
        cout<<'0';
        return 0;
    }
    //esta
    for(int i = 0; i < c; i++){
        for(int j=0; j<n ; j++){
            if(val[i]==testigos[j]||val[i]==0 || val[i]==1000){
                val[i]=0;
                tiem[i]=0;
                aux--;
            }
        }
    }
        int xd; int mayor=0;
        for(int i = 0; i<c;i++){
            mayor = max(mayor, tiem[i]);
        }
        cout<<mayor;
    return 0;
}
