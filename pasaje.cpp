#include <iostream>
#include <vector>
using namespace std;
int n,p;
vector<int> v;


int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin>>n;
    int a[n]={0};
    for(int i=0;i<n;i++){
        cin>>p;
        v.push_back(p);
    }

    for(int i=0;i<n;i++){
        for(int j=i; j < n-i;j++){
            if(v[i] >= v[j]){
                a[i]++;
            }else{
             break;   
            }
        }
        for(int j=i; j > 0;j--){
            if(v[i] >= v[j]){
                a[i]++;
            }else{
                break;
            }
        }
    }

    for(int i = 0; i <n;i++){
        cout<<a[i]<<' ';
    }

    return 0;
}
