/*
 * Aerolinea.h
 *
 *  Created on: 11 may. 2022
 *      Author: usuario
 */

#ifndef AEROLINEA_H_
#define AEROLINEA_H_

typedef struct
{
	int id;
	char descripcion[20];
	char aerolinea[20];
	int isEmpty;
}eAerolinea;

int mostrarDescripcion(eAerolinea* pListaAerolinea, int  tam, int id, char descripcion[]);
#endif /* AEROLINEA_H_ */


