// fmatriz.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//UNIVERSIDAD POLITECNICA DE TULANCINGO
//ELECTRONICA Y TELECOMUNICACIONES 
//LOGICA DE PROGRAMACION 3 PARCIAL
//HUGO ALEJANDRO RUIZ PEREZ
//ESTE PROGRAMA GENERA UNA MATRIZ DE NUMEROS ALEATORIOS YA SEA POR CAPTURA O POR LLENADO MEDIANTE FUNCIONES Y UN TIME PARA TENER DIFERENTES VALORES

#include "pch.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
const int n = 4;
void captura(int matriz[n][n])
{
	int ren = 0, col;
	while (ren < n)
	{
		col = 0;
		while (col < n)
		{
			printf("Captura el elemento [%d,%d]", ren, col);
			scanf_s("%d", &matriz[ren][col]);
			col++;
		}
		ren++; col = 0;
	}
}
void secuencia(int matriz[n][n])
{
	
	int arreglo[30], resultado[30];
	int ren = 0, col, indice;
	//primero la secuencia
	while (ren < 30)
	{
		arreglo[ren] = ren + 1;
		ren++;
	}
	ren = 0, col = 29;
	while (col > 0)
	{
		indice = rand() % col;
		resultado[ren] = arreglo[indice];
		arreglo[indice] = arreglo[col];
		col--;
		ren++;
	}
	resultado[ren] = arreglo[col];
	ren = 0;
	while (ren < 30)
	{
		printf("%d, ", resultado[ren]);
		ren++;

	}
	printf("\n\n");
}
void mostrar(int matriz[n][n]) {
	int ren = 0,col;
	while (ren < n) {
	 col = 0;
		while (col < n) {

			printf(" %4d ", matriz[ren][col]);
			col++;
		}
		printf("\n");
		ren++;
	}
}
int main()
{
	int cuadro[n][n];
	char respuesta;
	srand(time(NULL));
	secuencia(cuadro);
	printf("Desea capturar (s/n): ");
	respuesta = getchar();
	if (respuesta == 's' || respuesta == 'S') {
		captura(cuadro);
	}
	else {
		secuencia(cuadro);
	}
	mostrar(cuadro);
}

