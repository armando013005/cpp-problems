#include <iostream>
using namespace std;
int main() {
	int alumnos[20];
	int cubeta[11]{};
	int calificaciones,pos=0,moda=0;

	for (int i = 0; i <= 19; i++)
	{
		cin >> calificaciones;
		alumnos[i] = calificaciones;
		cubeta[alumnos[i]]++;

	}
	for(int i; i<=10;i++)
    {
        if(cubeta[i]>pos){
            pos=cubeta[i];
            moda=i;
        }
	}
	cout<<"la moda es "<<moda<<" y hay "<<pos<<" personas que tienen esta calificacion";
	return 0;
}

