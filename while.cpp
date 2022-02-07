#include <iostream>

using namespace std;

int main()
{
    int fil, col;

    cout << "\nFilas: "; cin >> fil;
    cout << "Columnas: "; cin >> col;

    int matriz[fil][col];
    int matriz2[fil * 3][col * 3];

    int k = 1;
    for (size_t i = 0; i < fil; i++)
        for (size_t j = 0; j < col; j++)
            matriz[i][j] = k++;

    int fil2 = 0, col2 = 0;
    for (size_t i = 0; i < fil; i++)
    {
        col2 = 0;
        for (size_t j = 0; j < col; j++)
        {
            for (size_t a = fil2; a < fil2 + 3; a++)
            {
                for (size_t b = col2; b < col2 + 3; b++)
                {
                    matriz2[a][b] = matriz[i][j];

                }

            }
            col2 += 3;
        }
        fil2 += 3;
    }

    cout << endl;
    for (size_t i = 0; i < fil * 3; i++)
    {
        for (size_t j = 0; j < col * 3; j++)
        {
           cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
