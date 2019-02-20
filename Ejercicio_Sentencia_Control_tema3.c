/*
AUTOR: ADRIAN MUÑOZ MOLINA
Grupo: Q-103
Descripciom: Sentencia De Control 
*/
#include <stdio.h>
#include <math.h>
int main() {
	
	int compras, cheque_regalo;
	
	printf("Introduce tu numero de compras superior a 20$ en este mes\n");
	scanf("%d", &compras); 
	
	if (compras < 5) {
		printf("No tienes compras suficientes para el regalo\n");
		
	}
	
	else {
		printf("Escoge tu cheque regalo: 1 15$ de descuento en Carniceria, 2 10$ de descuento en Bolleria, 3 10$ de descuento en Pescaderia, 4 20$ de descuento en Fruteria\n");
		scanf("%d", &cheque_regalo);
		if (cheque_regalo==1) {
			printf("Enhorabuena aqui tienes tu cheque de 15$ en Carniceria\n");
		}
		else if (cheque_regalo==2) {
				printf("Enhorabuena aqui tienes tu cheque de 10$ en Bolleria\n");
		}
		else if (cheque_regalo==3) {
			    printf("Enhorabuena aqui tienes tu cheque de 10$ en Pescaderia\n");
		}
		else if (cheque_regalo==4) {
			    printf("Enhorabuena aqui tienes tu cheque de 20$ en Fruteria\n");
		}
	}
	printf("Para reclamar el chuque en tienda debe de disponer de los tickets de compras de este mes\n");
	printf("En caso de no disponer de los tickets no se entregara el cheque regalo\n");
	printf("Si tiene alguna duda sobre estos cheques regalo no dude en llamar al numero de Atencion Al Cliente\n");
	printf("Atencion Al Cliente: 921345632\n");
}
