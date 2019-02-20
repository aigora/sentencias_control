/*
Autora: Beatriz Sanz
Grupo; Q103
Descripción: Elegir un numero al cual estará asignado un color.
*/
#include<stdio.h>

int main(){
	int numero, color;
	
	printf("Introduce numero entre 1 y 5\n");
	scanf("%d", &numero);
	
	if(numero<1 || numero>5) {
		printf("ningun color asignado\n");
	}
	if(numero==1) {
		printf("color negro\n");
	}
	if(numero==2) {
		printf("color rosa\n");
	}
	if(numero==3) {
		printf("color amarillo\n");
	}
	if(numero==4) {
		printf("color verde\n");
	}
	if(numero==5) {
		printf("color morado\n");
	}
	printf("fin del programa");
}
