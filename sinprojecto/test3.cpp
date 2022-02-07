#include <vector>
#include <iostream>
using namespace std;

vector<int>* v;


int main(){

    v.push_back(&1);

    cout << v[0];
    return 0;
}


