#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int v[100005];

int main()
{
    int n, ni;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ni;
        v[i] = ni;
    }

    sort(v, v + n);

    vector<int> altura;
    int columnas = 0;
    int maxh = 1;

    altura.push_back(1);

    for (int i = 2; i < n; i++)
    {

        for (int j = 0; j < altura.size(); j++)
        {

            if (v[i] >= altura[j])
            {
                altura[j]++;
                break;
            }
            else if (j == altura.size() - 1)
            {
                altura.push_back(1);
                break;
            }
        }
    }

    cout << altura.size();
    return 0;
}
