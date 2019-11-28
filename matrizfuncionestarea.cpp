//matrizfunciones.cpp
//UNIVERSIDAD POLITECNICA DE TULANCINGO
//ELECTRONICA Y TELECOMUNICACIONES
//LOGICA DE PROGRAMACION 3 PARCIAL
//HUGO ALEJANDRO RUIZ PEREZ
//ESTE PROGRAMA REALIZA UNA MATRIZ POR CAPTURA O POR LLENADO
#include "pch.h"
#include <stdlib.h>
#include <stdio.h>
const int n = 4;
int res;

int main()
{
	printf("dijite\n..0..matriz por captura\n ..1.. por llenado\n");
	scanf_s("%d", &res);
	if (res < 1)
	{
		void captura(int matriz[][n], int ren, int col);
		int matriz[n][n];
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
		void mostrar(int matriz[][n], int ren, int col);
		ren = 0;
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

	else
	{
		void llenado(int matriz[][n], int ren, int col, int seq);
		int matriz[n][n];
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
                void mostrar(int matriz[][n], int ren, int col);

		ren = 0;
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
}