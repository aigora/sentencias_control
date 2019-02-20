/*Autora: Dayana Izquierdo
Grupo: Q103
Descripción: Ordena de mayor a menor tres numeros diferentes ingresados por usuario

*/
#include <stdio.h>

int main () {
	
	float a;
	float b;
	float c;
	float max;
	float med;
	float min;
	
	
	printf("\t\tCOMPARADOR DE TRES NUMEROS\n\n");
	printf("\nEscriba un numero:\t");
	scanf("%f", &a);
	printf("\nEscriba otro numero diferente al primero:\t");
	scanf("%f", &b);
	printf("\nEscriba otro numero mas diferente a los dos primeros:\t");
	scanf("%f", &c);

	if (a>=b && a>=c) {
		max = a;
		if (b>=c) {
			med = b;
			min = c;	
		}
		else {
		    med = c;
		    min = b;
		}
	}
    else if (b>=a && b>=c) {
				max = b;
		 if (a>=c) {
			med = a;
			min = c;	
		}
		else {
		    med = c;
		    min = a;
		}
	}
	else if (c>=a && c>=b) {
			max = c;		
		if (b>=a) {
			med = b;
			min = a;	
		}
		else {
		    med = a;
		    min = b;
		}
	
	}
	printf ("\n%.2f", max);
	printf ("\n%.2f", med);
	printf ("\n%.2f", min);

}
