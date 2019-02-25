/*
Nombre: Alberto Díaz-Guerra Fernández
Grupo: Q-103
Título: Programa que pide un numero real y diga sus mitades sucesivas hasta el 1
*/

#include<stdio.h>

int main(){
	
	float i, num;//i es el contador, es como lo inicial
	printf("Escriba un numero entero: ");
	scanf("%f", &num);
	printf("\nEl numero introducido es: %.2f",num);
	
	for(i=num/2; i>=1; i=i/2){
		printf("\nEl numero dividido entre 2 es: %.2f\n",i);
	} 
	
	return 0;
}
