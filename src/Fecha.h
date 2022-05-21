/*
 * Fecha.h
 *
 *  Created on: 11 may. 2022
 *      Author: usuario
 */

#ifndef FECHA_H_
#define FECHA_H_
typedef struct
{
	int id;
	int dia;
	int mes;
	int anio;
	int isEmpty;
}eFecha;


#endif /* FECHA_H_ */

int altaFecha(eFecha* pListaFecha, int dia, int mes, int anio, int tam, int id);
