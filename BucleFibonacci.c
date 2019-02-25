/*Carlota Stocks Galván
  Q-103
  Elegir el número de elementos de la secuencia de Fibonacci que apareceran en pantalla.*/
#include <stdio.h>
//1,1,2,3,5,8,13...
int main(){
	int numero, i, x=0, y=1, z=1;
	printf("Introduzca el numero de elementos:\n");
	scanf("%i", &numero);
	for(i=1;i<=numero;i++){
		z = x + y;
		x = y;
		y = z;
		
		printf("%i, ", z);
	
		
	}
}
