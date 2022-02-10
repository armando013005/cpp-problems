/*******************************************************
*   
*   https://omegaup.com/arena/problem/OMI-2020-Cajas#problems
*   100%
*   (moroni)
*********************************************************/

#include <iostream>
#include <queue>
using namespace std;
priority_queue<int>cajas, torres;
int main()
{
    int n;
    cin >> n;
    for (int x = 0; x < n; x++) {
        int aux;
        cin >> aux;
        cajas.push(-aux);
    }
    torres.push(0);
    while (!cajas.empty()) {
        if (torres.top() < cajas.top()) {
            torres.push(0);
        }
        else {
            int aux = torres.top();
            torres.pop();
            while (!cajas.empty() && aux >= cajas.top()) {
                aux--;
                cajas.pop();
            }
            torres.push(aux);
        }
    }
    cout << torres.size();
    return 0;
}