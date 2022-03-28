// Cope El Constructor.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <queue>

using namespace std;

int x,
    n, m, mt[1000][1000],
    nE, mE;

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mt[i][j];
        }
    }
    cin >> x;
    nE = n*x;
    mE = m*x;

    for (int i = 0; i < nE; i++) {
        for (int j = 0; j < mE; j++) {
            cout<< mt[i / x][j / x]<<' ';
        }
        cout << '\n';
    }
   
    
    return 0;
}
