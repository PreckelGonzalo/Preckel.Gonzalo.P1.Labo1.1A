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

char menu()
{
    char opcion;
    printf(" ----------------------------\n");
    printf("\n    **MENU DE OPCIONES**\n");
    printf(" ----------------------------\n");
    printf("\nSi desea dar de alta un avion presione A");
    printf("\nSi desea modificar un avion presione B");
    printf("\nSi desea dar de baja un avion presione C");
    printf("\nSi desea listar los aviones presione D");
    printf("\nSi desea listar las aerolibeas presione E");
    printf("\nSi desea listar tipos presione F");
    printf("\nSi desea listar destinos presione G");
    printf("\nSi desea dar de alta un vuelo presione H");
    printf("\nSi desea listar vuelos presione I");
    printf("\n\nSeleccione una opcion: ");
    fflush(stdin);
    scanf("%c", &opcion);

    return opcion;
}

int subMenu()
{
	char opcion;
		printf(" ----------------------------\n");
	    printf("\n    **SUBMENU DE OPCIONES**\n");
	    printf(" ----------------------------\n");
	    printf("\nSi quiere modificar el tipo de avion presione A");
	    printf("\nSi quiere modificar la capacidad del avion presione B");
	    printf("\n\nSeleccione una opcion: ");
	    fflush(stdin);
	    scanf("%c", &opcion);

	    return opcion;
}


