#include <bits/stdc++.h>
using namespace std;
int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int naruto=30, sasuke=30, tam;
    char signum[100];
    gets(signum);
    tam=strlen (signum);
    for (int i=0; i<tam; ++i) {
        if (signum[i]=='+') {
            naruto=naruto+((int)signum[i+1]-48);
        }
        else if (signum[i]=='x'){
            naruto=naruto*((int)signum[i+1]-48);
        }
    }

    for (int i=tam-1; i>=0; --i) {
        if (signum[i]=='+') {
            sasuke=sasuke+((int)signum[i+1]-48);
        }
        else if (signum[i]=='x'){
            sasuke=sasuke*((int)signum[i+1]-48);
        }
    }
    if (naruto==sasuke) {
        cout<<"Empate";
    }
    else {
    cout<<naruto<<" "<<sasuke;
    }
    return 0;
}
