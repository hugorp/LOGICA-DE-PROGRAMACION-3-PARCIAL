//UNIVERSIDAD POLITECNICA DE TULANCINGO
//ELECTRONICA Y TELECOMUNICACIONES
//LOGICA DE PROGRAMACION 3 PARCIAL
//HUGO ALEJANDRO RUIZ PEREZ
//ESTE PROGRAMA ORDENA VALORES DE N MEDIANTE UN ARREGLO

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

const int n = 10;

void captura(int arreglo[]) {
	int ind;
	// Captura una lista de ene valores enteros
	ind = 0;
	while (ind < n) {
		printf("captura a[%d: ]", ind);
		printf("%D", &arreglo[ind]);
		ind++;
	}
}
void Mostrar(int arre[]) {
	int indi;
	indi = 0;
	while (indi < n) {
		if (indi > 0)printf(",");
		printf("%d", arre[indi]);
		indi++;

	}

}

int main() {
	
}
