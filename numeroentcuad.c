/*
AUTORA: ROSA SILVERIO GUZMAN
GRUPO: Q103
DESCRIPCION: IMPRIME TODOS LOS NUMEROS NATURALES DEL 1 AL 10 ELEVADOS AL CUADRADO DE 1 AL 10 Y EL VALOR DE SU RAIZ CUADRADA
*/

#include<stdio.h>
#include<math.h>

 int main() {
 	
 	
	 int y=1;
	 float i,w;
 	
	 for (y=1; y!=11 ; y++)
 	{
 		i=sqrt(y);
 		w=pow(y,2);
 		printf("La raiz cuadradada de %d es %.3f\n",y,i);
 		printf("%d^2 es igual a %3.f\n",y,w);
	 }
 	
 	
 	
 	return 0;
 }
