#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
#include "Fecha.h"
#include "Aerolinea.h"
#include "Tipo.h"
#include "Destino.h"
#include "Vuelo.h"
#include "Avion.h"


int altaFecha(eFecha* pListaFecha, int dia, int mes, int anio, int tam, int id)
{
	int retorno = -1;
	int index;
	if(pListaFecha != NULL && tam > 0 && dia > 0 && dia < 31 && mes > 0 && mes < 12 && id > 0)
		{
			if(index != -1)
			{
				printf("*ALTA FECHA*\n");
				pListaFecha[index].id = id;
				id++;

				printf("Ingrese un dia: \n");
				scanf("%d", &dia);
				pListaFecha[index].dia = dia;


				printf("Ingrese un mes: \n");
				scanf("%d", &mes);
				pListaFecha[index].mes = mes;

				printf("Ingrese un año: \n");
				scanf("%d", &anio);
				pListaFecha[index].anio = anio;



				printf("Id   Dia       Mes    Año    \n");

				retorno = 0;
			}
			else
			{
				printf("No existe esa fecha\n");
			}
		}

	return retorno;
}
