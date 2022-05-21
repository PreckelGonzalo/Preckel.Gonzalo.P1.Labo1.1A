
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operaciones.h"
#include "Fecha.h"
#include "Aerolinea.h"
#include "Tipo.h"
#include "Destino.h"
#include "Vuelo.h"
#include "Avion.h"
#define tam_aerolinea 5
#define tam_destino 4
#define tam_tipo 4
#define tam_avion 300
#define tam_vuelo 300
int main(void)
{
	setbuf(stdout,NULL);
	fflush(stdin);


	eFecha pListaFecha;
	eAerolinea pListaAerolinea[tam_aerolinea] = {
			{1000, "Lan"},
			{1001, "Iberia"},
			{1002, "Norwegian"},
			{1003, "American"},
			{1004, "Austral"}
	};
	eTipo pListaTipo[tam_tipo] = {
			{5000, "Jet"},
			{5001, "Helice"},
			{5002, "Planeador"},
			{5003, "Carga"}
	};
	eAvion pListaAvion[tam_avion];
	eVuelo pListaVuelo[tam_vuelo];
	eDestino pListaDestino[tam_destino] = {
			{20000, "Calafate", 22250},
			{20001, "Miami", 103000},
			{20002, "Madrid", 84400},
			{20003, "Amsterdam", 95600}
	};

	int id = 0;
	char seguir = 's';

	do
	{
		switch(menu())
				{
					case 'A':
						 altaAvion(pListaAvion,id, tam_avion);
					break;
					case 'B':
						modificarAvion(pListaAvion, tam_avion);

					break;
					case 'C':
						borrarAvion(pListaAvion, tam_avion, id);
					break;
					case 'D':
						switch(subMenu())
						{
							case 1:

							break;

							case 2:

							break;

							default:
							break;
						}
					break;
					case 'E':
						 ordenAscYDesc(pListaAerolinea, tam_avion,0);
					break;
					case 'F':
						ordenAscYDesc(pListaTipo, tam_avion, 1);
					break;
					case 'G':
						ordenAscYDesc(pListaDestino, tam_avion,0);
					break;
					case 'H':
						altaVuelo(pListaVuelo, id, tam_avion);
					break;
					case 'I':
						ordenAscYDesc(pListaVuelo, tam_avion,1);
					break;
					case 'J':
						printf("Si desea seguir s\n");
						fflush(stdin);
						scanf("%c", &seguir);
					break;
					default:
						printf("La opcion elegida no existe\n");

					break;
				}
	}while(seguir == 's');

}
