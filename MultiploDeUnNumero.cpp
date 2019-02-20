/*
Autora: Noelia Arencibia
Grupo: Q103
Descripción: Este programa te dice si el numero introducido por pantalla es multiplo de 2 o no, y aparte si fuera multiplo de 3 o 5.
También te indica si el número es par o impar.
*/

#include <stdio.h>
int main () {
	int num;
	printf("Teclea un numero y veremos si es multiplo de 2\n");
	scanf("%i", &num);
	if (num%2==0) {
		printf("Tu numero es multiplo de 2\n");
	}	
    else {
		printf("Lo sentimos, tu numero no es multiplo de 2\n");
	}
		if (num%5==0){
			printf(" es multiplo de 5\n");
					}
	    if (num%3==0) {
			printf(" es multiplo de 3\n");
					
        	}
	if (num%2==0){
		printf("tu numero es par\n");
	}
			else {
				printf("tu numero es impar\n");
			}
}
	

