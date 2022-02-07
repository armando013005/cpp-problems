#include<bits/stdc++.h>
using namespace std;
int f, c, pc;
int arr[110];
int mt[110][110];
bool encontrado=false;
void esta_(){
int abajo=0, derecha=0,n=0;
    for(int i=1;i<=f;i++){ abajo=0;
        for(int j=1;j<=c;j++){ derecha=0;
            n=0;
            while(n<c){
                if(j+n>c||i+n>c){
                    break;
                }
                if(arr[j]==mt[i][j+n]){
                    derecha++;
                }
                if(arr[i]==mt[i+n][j]){
                    abajo++;
                }else{
                    break;
                }
                n++;
            }
        }
    }
    if(abajo==c||derecha==c){
        cout<<"Diana encontro la computadora";
        exit(-1);
    }else{
        cout<<"L se salio con las suyas";
        exit(-1);
    }
}
int main(){
    cin>>f>>c>>pc;
    for(int i=1;i<=f;i++){
        for(int j=1;j<=c;j++){
            cin>>mt[i][j];
        }
    }
    for(int i=1;i<=pc;i++){
        cin>>arr[i];
    }
    esta_();
    return 0;
}
