/*
 * Avion.h
 *
 *  Created on: 11 may. 2022
 *      Author: usuario
 */

#ifndef AVION_H_
#define AVION_H_

typedef struct
{
	int id;
	 eAerolinea idAerolinea;
	 eTipo idTipo;
	int capacidad;//Entre 10 y 300
	int isEmpty;

}eAvion;

#endif /* AVION_H_ */
int buscarEspacioAvion(eAvion* pListaAvion, int tam);

int mostrarAvion(eAvion* unAvion, int tamAvion, eAerolinea* pListaAerolinea, int tamAerolinea, eTipo* pListaTipo, int tamTipo);

int altaAvion(eAvion* pListaAvion, int id, int tam);

int mostrarAviones(eAvion* pListaAvion, int tamAvion, eAerolinea* pListaAerolinea, int tamAerolinea, eTipo* pListaTipo, int tamTipo);

int buscarAvionPorId(eAvion* pListaAvion, int tam,int id);

int modificarAvion(eAvion* pListaAvion, int tam);

int borrarAvion(eAvion* pListaAvion, int tam, int ids);
