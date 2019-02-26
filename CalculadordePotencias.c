/*Autor:Hugo García
Grupo: Q203
Descripción: Se trata de calcular la potencia de un número en la que el usuario introduce la base y el exponente*/

#include<stdio.h>

int main()
{
	int base, exponente, potencia , i;
	i = 1;
	potencia = 1;
	printf("Bienvenido a la calculadora de potencias \n");
	
	printf("Introduce la base de la potencia que desea calcular:\n");
	scanf("%d", &base);
	printf("Introduce el exponente de la potencia que desea calcular:\n");
	scanf("%d", &exponente);
	
	
	while (i<=exponente){
	
	  potencia *= base;
	  ++i;
	}
	printf("El resultado es: %d",potencia);
    return 0;
}
