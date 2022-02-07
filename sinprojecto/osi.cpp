#include<bits/stdc++.h>
using namespace std;
int main (){
    int tC,cC,tM,cM,p,a,e,cu,trompos=0;
    cin>>tC>>cC>>tM>>cM>>p>>a>>e>>cu;
    if (tC>0&&cC>0&&tM>0&&cM>0&&p>0&&a>0&&e>0&&cu>0){
        trompos=(tC*cC)*(tM*cM)*(p*a*e*cu);
        trompos=trompos*2;
    }else if (tM>0&&cM>0&&p>0&&a>0&&e>0&&cu>0){
        trompos=(tM*cM)*(p*a*e*cu);
        trompos=trompos*4;
    }else if (tM>0&&cM>0&&a>0&&e>0&&cu>0){
        trompos=(tM*cM)*(a*e*cu);
        trompos=trompos*4;
    }else if (tM>0&&cM>0&&p>0&&e>0&&cu>0){
        trompos=(tM*cM)*(p*e*cu);
        trompos=trompos*4;

    }else if (tM>0&&cM>0&&p>0&&a>0&&cu>0){
        trompos=(tM*cM)*(p*a*cu);
        trompos=trompos*2;

    }else if (tM>0&&cM>0&&p>0&&a>0&&e>0){
        trompos=(tM*cM)*(p*a*e);
        trompos=trompos*2;

    }else {
        trompos=0;

    }
    cout<<trompos;
    return 0;
}

