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

int buscarEspacioAvion(eAvion* pListaAvion, int tam)
{
	int lugarVacio = -1;
	if(pListaAvion != NULL && tam > 0)
	{
		for(int i = 0; i < tam; i++)
		{
			if(pListaAvion[i].isEmpty == 0)
			{
				lugarVacio = i;
			}
		}//FIN FOR
	}//FIN IF
	return lugarVacio;
}//FIN FUN

int altaAvion(eAvion* pListaAvion, int tamAvion, eAerolinea* pListaAerolinea, int tamAerolinea, eTipo* pListaTipo, int tamTipo)
{
	int retorno = -1;
	int index;
	int id;
	if(pListaAvion != NULL && tamAvion > 0 && pListaAerolinea != NULL && tamAerolinea > 0 && pListaTipo != NULL && tamTipo > 0)
		{
			index = buscarEspacio(pListaAvion, tamAvion);
			if(index != -1)
			{
				printf("*ALTA AVION*\n");
				pListaAvion[index].id = id;
				id++;
				printf("Seleccione el id de la aerolinea: \n");
				scanf("%d", pListaAerolinea->id);
				printf("Seleccione el id del tipo de avion: \n");
				scanf("%d", pListaTipo->id);
				printf("Indique la capacidad del avion: \n");
				scanf("%d", pListaAvion->capacidad);


				retorno = 0;
			}
			else
			{
				printf("No se pudo dar de alta el avion\n");
			}
		}

	return retorno;
}

int mostrarAvion(eAvion* unAvion, int tamAvion, eAerolinea* pListaAerolinea, int tamAerolinea, eTipo* pListaTipo, int tamTipo)
{
	int retorno = -1;
	if(unAvion != NULL && tamAvion > 0 && pListaAerolinea != NULL && tamAerolinea > 0 && pListaTipo != NULL && tamTipo > 0)
	{
		printf("%d    %d    %d    %d\n", unAvion->id, unAvion->idAerolinea, unAvion->idTipo, unAvion->capacidad);

		retorno = 0;
	}
	return retorno;
}

int mostrarAviones(eAvion* pListaAvion, int tamAvion, eAerolinea* pListaAerolinea, int tamAerolinea, eTipo* pListaTipo, int tamTipo)
{
	int retorno = -1;


	if(pListaAvion != NULL && tamAvion > 0 && pListaAerolinea != NULL && tamAerolinea > 0 && pListaTipo != NULL && tamTipo > 0)
	{
		printf("Id     idAerolinea             idTipo         Capacidad\n");
		for(int i = 0; i < tamAvion; i++)
		{
			if(pListaAvion[i].isEmpty == 1)
			{
				mostrarAvion(pListaAvion[i], tamAvion, pListaAerolinea[i].id, tamAerolinea, pListaTipo[i].id, tamTipo);
			}
		}
		retorno = 0;
	}

	return retorno;
}



int buscarAvionPorId(eAvion* pListaAvion, int tam,int id)
{
	int indexEncontrado = -1;
	if(pListaAvion != NULL && tam > 0)
	{
		for(int i = 0 ; i < tam ; i++)
		{
			if(pListaAvion[i].isEmpty == 1 && pListaAvion[i].id == id)
			{
				indexEncontrado = i;
				break;
			}
		}
	}

	return indexEncontrado;
}

int modificarAvion(eAvion* pListaAvion, int tam)
 {
 	int id;
 	int idEncontrado;
 	int opciones;
 	char tipoDeAvion[20];
 	int capacidad;
 	float precio;
 	char codigoDeVuelo[10];

 	if(pListaAvion != NULL && tam > 0)
 	{
 		mostrarAviones(pListaAvion, tamAvion, pListaAerolinea, tamAerolinea, pListaTipo, tamTipo);
 		printf("Ingrese el id del avion a modificar\n");
 		scanf("%d", &id);
 		pListaAvion = buscarAvionPorId(pListaAvion, tam, id);
 		if(idEncontrado > 0 && idEncontrado <= tam)
 		{
 			printf("Pulse 1 para cambiar el tipo de avion\n");
 			printf("Pulse 2 para cambiar la capacidad del avion\n");
 			scanf("%d", &opciones);

 			switch(opciones)
 			{
 				case 1:
 					printf("Ingrese un nuevo tipo: \n");
 					fflush(stdin);
 					scanf("%s", tipoDeAvion);
 					strcpy(pListaAvion[idEncontrado].descripcion , tipoDeAvion);
 				break;

 				case 2:
 					printf("Ingrese una nueva capacidad: \n");
 					scanf("%d", capacidad);
 					strcpy(pListaAvion[idEncontrado].capacidad, capacidad);
 				break;
 				default:
 					printf("La opcion ingresada no es valida");
 				break;

 			}
 			mostrarAviones(pListaAvion[idEncontrado], tam);
 		}
 	}
 	return idEncontrado;
 }

int borrarAvion(eAvion* pListaAvion, int tam, int ids)
{
	int retorno = -1;
	int index;
	if(pListaAvion != NULL && tam > 0)
	{
		mostrarAviones(pListaAvion, tamAvion, pListaAerolinea, tamAerolinea, pListaTipo, tamTipo);
		printf("Elija el id del avion que quiere quitar del sistema: ");
		scanf("%d", &ids);
		index = buscarAvionPorId(pListaAvion, tam, ids);
		if(index == -1)
		{
			printf("No se encontraron aviones\n");
		}
		else
		{
			for(int i = 0; i < tam; i++)
			{
				pListaAvion[i].isEmpty = 0;
			}
			printf("El avion de la posicion %d fue eliminado del sistema\n", ids);
			mostrarAviones(pListaAvion, tamAvion, pListaAerolinea, tamAerolinea, pListaTipo, tamTipo);
			retorno = ids;

		}
	}

	return retorno;

}
