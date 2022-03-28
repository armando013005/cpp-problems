// el tablero de betty.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

using namespace std;

array <array<int, 104>, 104> tablero;

int m, n, k, moves[5], auxmoves[5];

int main()
{
	cin >> n >> m >> k;
	for (int i = 0; i < k; i++) {
		cin >> moves[0];
		moves[moves[0]]++;
		auxmoves[moves[0]]++;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> tablero[i][j];
		}
	}
	
	moves[1] -= auxmoves[2];
	moves[2] -= auxmoves[1];
	moves[3] -= auxmoves[4];
	moves[4] -= auxmoves[3];


	for (int i = 1; i <= 4; i++) {
		int act = moves[i];

		switch (i)
		{
		case 1:// up / arriba (1 -> n)
			for (int j = 0; j < act; j++) {
				for (int x = 1; x <= n-1; x++) {
					tablero[x].swap(tablero[x+1]);
				}
			}
			break;
		case 2:// down / abajo (n -> 1)
			for (int j = 0; j < act; j++) {
				for (int x = n; x >= 2 ; x--) {
					tablero[x].swap(tablero[x - 1]);
				}
			}
			break;
		case 3:// left / izquerda ( 1 -> m )
			for (int j = 0; j < act; j++) {
				for (int y = 1; y <= n; y++) {
					for (int x = 1; x <= m - 1; x++) {
						swap(tablero[y][x], tablero[y][x + 1]);
					}
				}
			}
			break;
		case 4:// right / derecha (m -> 1)
			for (int j = 0; j < act; j++) {
				for (int y = 1; y <= n; y++) {
					for (int x = m; x >= 2; x--) {
						swap(tablero[y][x], tablero[y][x - 1]);
					}
				}
			}
			break;
		}

	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout<< tablero[i][j]<<' ';
		}
		cout << '\n';
	}

	return 0;
}


