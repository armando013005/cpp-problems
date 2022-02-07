#include <bits/stdc++.h>
using namespace std;
int mt[3005][3005];
int di[] = {8, 1, -1, 0, 0};
int dj[] = {8, 0, 0, 1, -1};
struct objeto
{
    int pi;
    int pj;
    int d;
} act, sig;
queue<objeto> cola;
int main()
{
    int f, c, ii, ji;
    int aux;
    char p;
    cin >> f >> c;
    for (int i = 1; i <= f; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> p;
            switch (p)
            {
            case '#':
                mt[i][j] = -1;
                break;
            case 'A':
                ii = i;
                ji = j;
                break;
            case 'P':
                mt[i][j] = -9;
                break;
            }
        }
    }
    for (int i = 1; i <= f; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (mt[i][j] == -1)
            {
                act.pi = i;
                act.pj = j;
                act.d = 0;
                cola.push(act);
            }
        }
    }
    //elefante
    while (!cola.empty())
    {
        act = cola.front();
        cola.pop();
        for (int k = 1; k <= 4; k++)
        {
            sig.pi = act.pi + di[k];
            sig.pj = act.pj + dj[k];
            sig.d = act.d + 1;
            if (sig.pi <= f && sig.pi >= 1 && sig.pj <= c && sig.pj >= 1 && mt[sig.pi][sig.pj] == 0)
            {
                sig.d = act.d + 1;
                cola.push(sig);
                mt[sig.pi][sig.pj] = act.d + 1;
            }
        }
    }
    aux = act.d;
    mt[ii][ji] = -8;
    act.pi = ii;
    act.pj = ji;
    act.d = 0;
    cola.push(act);
    //andy
    while (!cola.empty())
    {
        act = cola.front();
        cola.pop();
        if (mt[act.pi][act.pj] == 0)
        {
            mt[act.pi][act.pj] = -11;
            for (int i = 1; i <= f; i++)
            {
                for (int j = 1; j <= c; j++)
                {
                    if (mt[i][j] > 0)
                    {
                        cout << '.';
                    }
                    switch (mt[i][j])
                    {
                    case -1:
                        cout << '#';
                        break;
                    case -8:
                        cout << 'A';
                        break;
                    case -9:
                        cout << 'P';
                        break;
                    case -11:
                        cout << 'X';
                        break;
                    }
                }
                cout << '\n';
            }
            return 0;
        }
        if (mt[act.pi][act.pj] == aux)
        {
            mt[act.pi][act.pj] = -11;
            for (int i = 1; i <= f; i++)
            {
                for (int j = 1; j <= c; j++)
                {
                    if (mt[i][j] > 0)
                    {
                        cout << '.';
                    }
                    switch (mt[i][j])
                    {
                    case -1:
                        cout << '#';
                        break;
                    case -8:
                        cout << 'A';
                        break;
                    case -9:
                        cout << 'P';
                        break;
                    case -11:
                        cout << 'X';
                        break;
                    }
                }
                cout << '\n';
            }
            return 0;
        }
        for (int k = 1; k <= 4; k++)
        {
            sig.pi = act.pi + di[k];
            sig.pj = act.pj + dj[k];
            sig.d = act.d + 1;
            if (mt[sig.pi][sig.pj] == 0)
            {
                mt[sig.pi][sig.pj] = -11;
                for (int i = 1; i <= f; i++)
                {
                    for (int j = 1; j <= c; j++)
                    {
                        if (mt[i][j] > 0)
                        {
                            cout << '.';
                        }
                        switch (mt[i][j])
                        {
                        case -1:
                            cout << '#';
                            break;
                        case -8:
                            cout << 'A';
                            break;
                        case -9:
                            cout << 'P';
                            break;
                        case -11:
                            cout << 'X';
                            break;
                        }
                    }
                    cout << '\n';
                }
                return 0;
            }
            if (mt[sig.pi][sig.pj] == aux)
            {
                mt[sig.pi][sig.pj] = -11;
                for (int i = 1; i <= f; i++)
                {
                    for (int j = 1; j <= c; j++)
                    {
                        if (mt[i][j] > 0)
                        {
                            cout << '.';
                        }
                        switch (mt[i][j])
                        {
                        case -1:
                            cout << '#';
                            break;
                        case -8:
                            cout << 'A';
                            break;
                        case -9:
                            cout << 'P';
                            break;
                        case -11:
                            cout << 'X';
                            break;
                        }
                    }
                    cout << '\n';
                }
                return 0;
            }
            if (sig.pi <= f && sig.pi >= 1 && sig.pj <= c && sig.pj >= 1 && mt[sig.pi][sig.pj] >= 0 || mt[sig.pi][sig.pj] == -9)
            {
                if (mt[sig.pi][sig.pj] == -9)
                {
                    sig.d = act.d + 1;
                    cola.push(sig);
                }
                else
                {
                    sig.d = act.d + 1;
                    cola.push(sig);
                    mt[sig.pi][sig.pj] = act.d + 1;
                }
            }
        }
    }
    return 0;
}
