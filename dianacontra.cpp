#include<bits/stdc++.h>
using namespace std;
int f, c, pc;
int arr[110];
int mt[110][110], cont=0;
int main(){
    cin>>f>>c>>pc;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cin>>mt[i][j];
        }
    }
    for(int i=0;i<pc;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=f;i++){
        if(cont==pc){
            break;
        }
        for(int j=1;j<=c;j++){
            if(cont==pc){
                break;
            }
            for(int k=0;k<pc;k++){
                if(arr[k]==mt[i][j+k]||arr[k]==mt[i+k][j]){
                    cont++;
                }else{
                    cont=0;
                    break;
                }
                if(cont==pc){
                    break;
                }
            }
        }
    }
        if(cont==pc){
            cout<<"Diana encontro la computadora";
            return 0;
        }else{
            cout<<"L se salio con las suyas";
            return 0;
        }
    return 0;
}
