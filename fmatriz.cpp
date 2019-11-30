// fmatriz.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//UNIVERSIDAD POLITECNICA DE TULANCINGO
//ELECTRONICA Y TELECOMUNICACIONES 
//LOGICA DE PROGRAMACION 3 PARCIAL
//HUGO ALEJANDRO RUIZ PEREZ
//ESTE PROGRAMA GENERA UNA MATRIZ YA SEA POR CAPTURA O POR LLENADO MEDIANTE FUNCIONES

#include "pch.h"
#include <stdlib.h>
#include <stdio.h>
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
void llenado(int matriz[n][n])
{
	int ren = 0, col;
	int seq = 1;
	while (ren < n)
	{
		col = 0;
		while (col < n)
		{

			matriz[ren][col] = seq;
			seq++;
			col++;
		}
		ren++; col = 0;
	}

}
void mostrar(int matriz[n][n]){
	int ren = 0;
	while (ren < n) {
		int col = 0;
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
	printf("Desea capturar (s/n): ");
	respuesta = getchar();
	if (respuesta == 's' || respuesta == 'S') {
		captura(cuadro);
	}
	else {
		llenado(cuadro);
	}
	mostrar(cuadro);

}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
