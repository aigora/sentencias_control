/*Autor: Rafael García Gómez
Grupo:Q103
Descripción: sucesión de números con bucle do while*/

#include<stdio.h>
int main(){
	int x,y,i;
	printf("escriba un numero: ");
	scanf("%i",&x);
	
	do{
		printf("escriba un numero mayor que el otro: ");
		scanf("%i",&y);
	}
	while (y<x);
	
	for(i=x;i<=y;i++){
		printf("%i ",i);
	}
}
