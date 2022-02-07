#include <bits/stdc++.h>
using namespace std;
struct juegos{
    int p;
    char e;
    bool ya = false;

}orcas[20], iguanas[20];
int main(){
    int n, j_g=0, j_g2=0;
    int pp;
    char ee;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>pp>>ee;
        orcas[i].p=pp;
        orcas[i].e=ee;
    }
    for(int i=0;i<n;i++){
        cin>>pp>>ee;
        iguanas[i].p=pp;
        iguanas[i].e=ee;
    }
    for(int i=0;i<n;i++){
        for(int j = 0; j<n; j++){
            switch(orcas[i].e){
                case 'F':
                    if(iguanas[j].e == 'N'&&iguanas[j].ya==false){
                        j_g++;
                        iguanas[j].ya = true;
                    }
                    break;
                case 'A':
                    if(iguanas[j].e == 'F'&&iguanas[j].ya==false){
                        j_g++;
                        iguanas[j].ya = true;
                    }
                break;
                case 'N':
                    if(iguanas[j].e == 'A'&&iguanas[j].ya==false){
                        j_g++;
                        iguanas[j].ya = true;
                    }
                    break;
            }
        }
    }
    cout<<j_g;
    return 0;
}

