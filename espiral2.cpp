#include <bits/stdc++.h>
using namespace std;
int i=0,j=0,f,c,num=0,
horizontal_d,
vertical_ar,
horizontal_i,
vertical_ab,
mt[110][110];
bool si=1;
int main(){
cin>>f>>c;
horizontal_d=c; horizontal_i=horizontal_d-1; vertical_ab=f-1; vertical_ar=vertical_ab-1;

while(si==1){
    for(int a=1;a<=horizontal_d;a++){
        num++;
        mt[i][j]=num;
        j++;
    }j--; i++;
    if(horizontal_d<=0){si=0; break;}
        for(int a=1;a<=vertical_ab;a++){
            num++;
            mt[i][j]=num;
            i++;
        }i--;j--;
        if(vertical_ab<=0){si=0; break;}
            for(int a=1;a<=horizontal_i;a++){
                num++;
                mt[i][j]=num;
                j--;
            }j++; i--;
            if(horizontal_i<=0){si=0; break;}
                for(int a=1;a<=vertical_ar;a++){
                    num++;
                    mt[i][j]=num;
                    i--;
                }j++;i++;
                if(vertical_ar<=0){si=0; break;}
    horizontal_d-=2;horizontal_i-=2;
    vertical_ab-=2;vertical_ar-=2;

}

    for(int a=0;a<f;a++){
        for(int b=0;b<c;b++){
            cout<<mt[a][b]<<' ';
        }
        cout<<'\n';
    }
return 0;
}
