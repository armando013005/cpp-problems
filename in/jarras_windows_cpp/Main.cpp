#include <stdio.h>
#include "jarras.h"
#define LLAVE 0
#define DESAGUE 3

int actual[3] = {0, 0, 0};

int maximo[3] = {0, 3, 5};
int objetivo = 1;

void verterAgua(int origen, int destino)
{
	if (LLAVE == origen)
   {
   	printf("Llena cubeta %d.\n", destino);
   	actual[destino] = maximo[destino];
   } else if (destino == DESAGUE)
   {
   	printf("Vacia cubeta %d.\n", origen);
   	actual[origen] = 0;
   } else
   {
   	printf("Vacia de %d a %d.\n", origen, destino);
   	int libre = maximo[destino] - actual[destino];

      if (libre > actual[origen])
      {
      	actual[destino] += actual[origen];
         actual[origen] = 0;
      }
      else
      {
      	actual[destino] = maximo[destino];
         actual[origen] -= libre;
      }
   }
   printf("Las cubetas ahora tienen %d y %d.\n\n", actual[1], actual[2]);
}

int main ()
{
	programa(objetivo, maximo[1], maximo[2]);

	if (actual[1] == objetivo)
		printf("OK\n");
	else
		printf("WA\n");

	return 0;
}
