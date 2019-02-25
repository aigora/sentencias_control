/*Maria Cruz Batista Gil
Q103
Descripcion: Listado números impares*/

#include <stdio.h>

int main (){
	
	int numero,i, c;
	printf("Introduzca una cantidad:");
	scanf("%d", &numero);
	
	for(i=0; numero>=i; i++){
		
		c=(i*2)+1;
		printf(" %d\n", c);

	}
	
}
