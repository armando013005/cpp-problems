#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> v;
vector <vector <int> > vt;

int main() {
    int n,ni;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> ni;
        v.push_back(ni);
    }

    sort(v.begin(),v.end());

    vector <int> altura;
    int columnas = 0;
    int maxh=1;
    for(int i=0;i<v.size();i++){

        if(altura.empty()) {altura.push_back(1); columnas++;}

        for(int j=altura.size()-1;j<altura.size(); j++){
            
            if(vt.empty()) {
                vector <int> e = {v[i]};
                vt.push_back(e);
            }

            if(v[i] < altura[j]){//no cabe
                if(j+1 < altura.size()-1){
                    altura.push_back(1);
                    columnas++;
                    vt[altura[j]-1].push_back(v[i]);
                    break;
                }
            }else{
                if(altura[j] < maxh){
                    vt[altura[j]-1].resize(altura.size());
                    vt[altura[j]-1][j] = v[i];
                    altura[j]++;
                    columnas++;
                    break;
                }else{
                    vector <int> caja;
                    caja.resize(altura.size());
                    caja[j] = v[i];
                    vt.push_back(caja);
                    altura[j]++;
                    

                }
                
            }

        }
        maxh = *max_element(altura.begin(), altura.end());
        
    }
    
    cout << columnas ;
	return 0;
}
