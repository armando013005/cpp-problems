// Camino Escondido.cpp : This file contains the 'main' function. Program execution begins and ends there.
//100
//

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int n, p, arr[400], arS[400], pp[400][400];
bool vis[400][400];

struct vec2 {
    int i;
    int j;
    bool yep;
};
struct obj
{
    int i = 0;
    int j = 0;
    int paso = 0;
    int sus = 0;
};

vec2 start, finish;

bool bin(int x) {

    int inicio=0, fin=p-1;
    
    while (inicio < fin) {
        int mitad = (inicio + fin) / 2;
        if (arS[mitad] >= x) {
            fin = mitad;
        }
        else {
            inicio = mitad + 1;
        }
    }

    if (arS[inicio] == x) {
        return true;
    }
    else {
        return false;
    }
}

bool dentro(obj a) {
    return (a.j >= 0 && a.j < n && a.i >= 0 && a.i < n);
}

bool valido(obj a) {
    return ((pp[a.i][a.j] == arr[a.sus] || pp[a.i][a.j] == 1) && !vis[a.i][a.j]);
}

int BFS() {

    queue<obj> q;
    obj s = { start.i, start.j, 1, -1};
    q.push(s);
    
    int mi[] = {-1,+0,+0,+1};
    int mj[] = {+0,+1,-1,+0};
    /*
        i,j
                j
              -1,0 
                |
        i 0,-1--*--0,+1
                |
              +1,0
    */
    int su=0;
    while (!q.empty()) {

        obj aux = q.front();
        int ai = aux.i;
        int aj = aux.j;
        int a = aux.paso;
        int sus = aux.sus;
        q.pop();
        if (sus != -1) {
            if (sus >= p-1) {
                sus = -1;
            }
        }

        if (pp[ai][aj] == 1) {
            if (!(start.i == ai && start.j == aj)) {
                su = a;
                break;
            }
        }

        vis[ai][aj] = true;

        for (int i = 0; i < 4; i++)
        {
            obj sig = { ai + mi[i], aj + mj[i], a + 1, (sus+1) };
            if (dentro(sig) && valido(sig)) {
                q.push(sig);
            }
        }

    }
    return su;
}

int main()
{
    cin >> n;
    cin >> p;

	for (int i = 0; i < p; i++)
	{
		cin >> arr[i];
		arS[i] = arr[i];
	}

	sort(arS,arS+p);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
		{
            int o;

            cin >> o;
            if(o != 1) {
                if (bin(o)) {
                    pp[i][j] = o;
                }
                else {
                    pp[i][j] = -1;
                }
            }
            else {
                if (start.yep) {
                    finish.yep = true;
                    finish.i = i;
                    finish.j = j;
                    pp[i][j] = 1;
                }
                else {
                    start.yep = true;
                    start.i = i;
                    start.j = j;
                    pp[i][j] = 1;
                }
            }
                
		}
	}

   /* for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << pp[i][j]<<' ';
        }
        cout << '\n';
    }*/

    cout << BFS();

    return 0;
}
