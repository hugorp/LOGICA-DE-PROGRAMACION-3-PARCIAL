// capturalistanvalores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//UNIVERSIDAD POLITECNICA DE TULANCINGO
//ELECTRONICA Y TELECOMUNICACIONES
//LOGICA DE PROGRAMACION
//HUGO ALEJANDRO RUIZ PEREZ 
//ESTE PROGRAMA N VALORES INGRESADOS POR EL USUARIO

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

const int n = 10;
int main()
{
	int a[n], indice, limite, pivote;
//captura una lista de n valores enteros
	indice = 0;
	while (indice < n)
	{
		printf("captura a[%d]: ", indice); scanf_s("%d", &a[indice]);
		indice = indice + 1;
	}
	printf("\nEl arreglo original es: ");
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
