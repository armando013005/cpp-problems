/******************************************************************************************
* 
* https://omegaup.com/arena/problem/COMI-Canchas/#problems
* 
* 100% con la funcion de ray
* 
*******************************************************************************************/

#include <iostream>
#include <cmath>
#include <vector>
struct rec {
	int x;
	int y;
	int width;
	int height;
};
typedef struct Puntos
{
	int x;
	int y;
}puntos;

rec Cancha1;
rec Cancha2;

int Dis2P(int x_1, int y_1, int x_2, int y_2) {
    return sqrt(pow((x_2 - x_1), 2) + pow((y_2 - y_1), 2));
}

int areaE(rec Cancha) {
    return Cancha.width * Cancha.height;
}

bool CheckCollisionRecs(rec rec1, rec rec2) {
    return (rec1.x < rec2.x + rec2.width &&
        rec1.x + rec1.width > rec2.x &&
        rec1.y < rec2.y + rec2.height &&
        rec1.height + rec1.y > rec2.y);
}

rec GetCollisionRec(rec rec1, rec rec2)
{
    rec rec = { 0, 0, 0, 0 };

    if (CheckCollisionRecs(rec1, rec2))
    {
        float dxx = abs(rec1.x - rec2.x);
        float dyy = abs(rec1.y - rec2.y);

        if (rec1.x <= rec2.x)
        {
            if (rec1.y <= rec2.y)
            {
                rec.x = rec2.x;
                rec.y = rec2.y;
                rec.width = rec1.width - dxx;
                rec.height = rec1.height - dyy;
            }
            else
            {
                rec.x = rec2.x;
                rec.y = rec1.y;
                rec.width = rec1.width - dxx;
                rec.height = rec2.height - dyy;
            }
        }
        else
        {
            if (rec1.y <= rec2.y)
            {
                rec.x = rec1.x;
                rec.y = rec2.y;
                rec.width = rec2.width - dxx;
                rec.height = rec1.height - dyy;
            }
            else
            {
                rec.x = rec1.x;
                rec.y = rec1.y;
                rec.width = rec2.width - dxx;
                rec.height = rec2.height - dyy;
            }
        }

        if (rec1.width > rec2.width)
        {
            if (rec.width >= rec2.width) rec.width = rec2.width;
        }
        else
        {
            if (rec.width >= rec1.width) rec.width = rec1.width;
        }

        if (rec1.height > rec2.height)
        {
            if (rec.height >= rec2.height) rec.height = rec2.height;
        }
        else
        {
            if (rec.height >= rec1.height) rec.height = rec1.height;
        }
    }

    return rec;
}
int main() {

	std::cin >> Cancha1.x >> Cancha1.y >> Cancha1.width >> Cancha1.height;
	std::cin >> Cancha2.x >> Cancha2.y >> Cancha2.width >> Cancha2.height;

    Cancha1.width = Dis2P(Cancha1.x, Cancha1.y, Cancha1.width, Cancha1.y);
    Cancha2.width = Dis2P(Cancha2.x, Cancha2.y, Cancha2.width, Cancha2.y);

    Cancha1.height = Dis2P(Cancha1.x, Cancha1.y, Cancha1.x, Cancha1.height);
    Cancha2.height = Dis2P(Cancha2.x, Cancha2.y, Cancha2.x, Cancha2.height);

    rec T = GetCollisionRec(Cancha1, Cancha2);
   /* std::cout << T.x << ' ' << T.y << ' ' << T.width << ' ' << T.height << '\n';

    std::cout << Cancha1.x << ' ' << Cancha1.y << ' ' << Cancha1.width << ' ' << Cancha1.height << '\n';
    std::cout << Cancha2.x << ' ' << Cancha2.y << ' ' << Cancha2.width << ' ' << Cancha2.height << '\n';*/

    std::cout << (areaE(Cancha1) + areaE(Cancha2)) - areaE(T);

	return 0;
}
