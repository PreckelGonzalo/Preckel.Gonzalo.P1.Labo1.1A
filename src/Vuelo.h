/*
 * Vuelo.h
 *
 *  Created on: 11 may. 2022
 *      Author: usuario
 */

#ifndef VUELO_H_
#define VUELO_H_

typedef struct
{
	int id;
	eAerolinea idAerolinea;
	eTipo idTipo;
	eFecha fecha;
	int isEmpty;
}eVuelo;

#endif /* VUELO_H_ */

int buscarEspacio(eVuelo* pListaVuelo, int tam);

int altaVuelo(eVuelo* pListaVuelo, int id, int tam);

int modificarVuelo(eVuelo* pListaVuelo, int tam);

void listarDestino(eDestino* pListaDestino, eVuelo* pListaVuelo, int tamDestino, int tamVuelo);
