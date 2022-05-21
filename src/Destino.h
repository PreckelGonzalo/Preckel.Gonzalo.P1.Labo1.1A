/*
 * Destino.h
 *
 *  Created on: 11 may. 2022
 *      Author: usuario
 */

#ifndef DESTINO_H_
#define DESTINO_H_

typedef struct
{
	int id;
	char descripcion[25];
	float precio;
	int isEmpty;

}eDestino;



#endif /* DESTINO_H_ */

int mostrarDestino(eDestino* unDestino, int tam);
