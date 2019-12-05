//UNIVERSIDAD POLITECNICA DE TULANCINGO
//ELECTRÓNICA Y TELECOMUICACIONES
//LOGICA DE PROGRAMACION 3 PARCIAL
//HUGO ALEJANDRO RUIZ PEREZ
//ESTE PROGRAMA REALIZA UN CUADRO MAGICO CON DIFERENTES NUMERO DE FILAS Y COLUMNAS

#include <iostream>
#include <stdlib.h>
#include <stdio.h>


void vaciar(int cuadro[61][61]) {
	int inren = 0,incol;
	while (inren < 61) {
		incol = 0;
		while (incol < 61) {
			cuadro[inren][incol]= 0;
			incol++;
		}
		inren++;
	}
}
void desplejar(int cuadro[61][61],int dim){
	int inren = 0, incol;
	while (inren < dim) {
		incol = 0;
		while (incol < dim) {
			printf("%4d", cuadro[inren][incol]);
			incol++;
		}
		printf("\n");
		inren++;
	}
}
int main()
{
	int  renglon, columna, renglona, columnaa, n, seq;
	int matriz[61][61];
	vaciar(matriz);
	do 
	{
		printf("Captura dimencion (3 a 61: )");
		scanf_s("%d", &n);
	} 
	while ((n % 2) == 0 || n < 0);
	renglon = 0;
	columna = n / 2;
	seq = 1;
	while (seq <= (n*n)) {
		matriz[renglon][columna] = seq;
		seq++;
		renglona = renglon; columnaa = columna;
		renglon--;
		columna++;
		if (renglon < 0) {
			renglon += n;
		}
		if (columna > (n - 1)) {
			columna -= n;
		}
		if (matriz[renglon][columna] != 0) {
			renglon = renglona;
			columna = columnaa;
			renglon++;
		}
	}
	printf("\n\n");
	desplejar(matriz, n);
	printf("\n\n");
}
