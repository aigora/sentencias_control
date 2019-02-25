/*
Autora: Paula de Antonio Grondona
Grupo: Q103
Descripcion: Ejrcicio 1 Libro. Escribir en una lista los cuadrados de los 10 primero numero naturales.
*/

#include<stdio.h>

int main(){
	int numero, cuadrado;
	
	for(numero=0; numero<=20; numero++){
		cuadrado = numero*numero;
		printf("%i al cuadrado= %i\n", numero, cuadrado);
	}
		
	return 0;
}
