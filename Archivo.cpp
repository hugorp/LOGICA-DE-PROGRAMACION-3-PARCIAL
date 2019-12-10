// Archivo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//UNIVERSIDAD POLITECNICA DE TULANCINGO
//ELECTRONICA Y TELECOMUNICACIONES
//LOGICA DE PROGRAMACION 3 PARCIAL
//HUGO ALEJANDRO RUIZ PEREZ
//ESTE PROGRAMA PERMITE EDITAR UN POGRAMA POR MEDIO DE SU ARCHIVO

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

FILE* fptr;
int main()
{
	fptr = fopen("C:\\Users\\Hugo Ruiz\\source\\repos\\datos\\escrito.txt", modo);
	fclose(fptr);
	int num;
	fptr = fopen("C:\\Users\\Hugo Ruiz\\source\\repos\\datos\\escrito.txt", "w");
	if (fptr == NULL); {
		printf("ERROR");
		exit(1);
	}
	printf("Captura numero: ");
	scanf_s("%d", num);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln