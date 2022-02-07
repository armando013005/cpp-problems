#include<bits/stdc++.h>
using namespace std;
long long int mem[200];
long long int f(long long int x){
	if(x<50){
		return 2;
	}
	else{
		if(mem[x]>0){
			return mem[x];
		}
		else{	
			mem[x]=f(x-1)+(f(x-5)*2);
			return mem[x];
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	cout<<f(n);
	
	return 0;	
}