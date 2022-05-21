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


int buscarEspacio(eVuelo* pListaVuelo, int tam)
{
	int lugarVacio = -1;
	if(pListaVuelo != NULL && tam > 0)
	{
		for(int i = 0; i < tam; i++)
		{
			if(pListaVuelo[i].isEmpty == 0)
			{
				lugarVacio = i;
			}
		}//FIN FOR
	}//FIN IF
	return lugarVacio;
}//FIN FUN


int altaVuelo(eVuelo* pListaVuelo, int id, int tam)
{
	char descripcion[25];
	int retorno = -1;
	int index;
	if(pListaVuelo != NULL && tam > 0 && id > 0)
		{
			index = buscarEspacio(pListaVuelo, tam);
			if(index != -1)
			{
				printf("*ALTA VUELO*\n");
				pListaVuelo[index].id = id;
				id++;

				printf("Ingrese una descripcion: \n");
				fflush(stdin);
				scanf("%s", descripcion);


				printf("Id   Descripcion    \n");

				retorno = 0;
			}
			else
			{
				printf("No hay espacio para Aerolineas\n");
			}
		}

	return retorno;
}

void listarDestino(eDestino* pListaDestino, eVuelo* pListaVuelo, int tamDestino, int tamVuelo)
{
	int destino;

	printf("Elija su destino: \n");
}

