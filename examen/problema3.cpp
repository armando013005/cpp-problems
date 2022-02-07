#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, p, s,pi, si;
    vector <int> arr1;
    vector <int> arr2;
    cin>>t;
    cin>>p>>s;
    cin>>pi>>si;
    int aux2 =0, aux=0, pos1=0,pos2=0;
   for(int k = 1; k<=t; k++){
        for(int i = 1; i<=(p+(p/2))+1; i++){
            if(i > (p+p/2)){
                arr1.push_back(-1);
            }else{
                arr1.push_back(i);
                pos1++;
            }
        }
        for(int j = 1; j<=(pi+(pi/2))+1; j++){
            if(j > pi+(pi/2)){
                arr2.push_back(-1);

            }else{
                arr2.push_back(j);
                pos2++;
            }
        }
        if((arr1[pos1] == -1 && arr2[pos1] == -1) || (arr1[pos2] == -1 && arr2[pos2] == -1)){
            if(arr1[pos2] == -1 && arr2[pos2] == -1){
                cout<<pos2+1<<'\n';

            }else{
               cout<<pos1+1<<'\n';
            }
            for(int i= 1; i<=pos1;i++){
                if(arr1[i]==-1){
                    cout<<"P ";
                }else{
                    cout<<arr1[i]<<' ';
                }
            }
            cout<<'\n';
            for(int i= 1; i<=pos1;i++){
                if(arr2[i]==-1){
                    cout<<"P ";
                }else{
                    cout<<arr2[i]<<' ';
                }
            }
            return 0;
        }
    }
    cout<<"No compatible";
    return 0;
}
