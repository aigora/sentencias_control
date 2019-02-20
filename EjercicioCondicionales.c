/* 
Autora: Vanesa Díaz
Grupo: Q103
Descripción: Este programa te calcula el precio de unas entradas y dependiendo de la edad y del numero hijos tienes descuentos o no.
*/

#include<stdio.h>

int main(){
	int edad, numHijos, numEntradasAdultos, numEntradasNino;
	float precioAdulto=40.5,precioNino=25, precioDescuentoF, precioDescuentoJ,precioGeneral;
	
	printf("Bienvenido al comprador online de entradas\n");
	printf("Indique en numero de hijos: ");
	scanf("%d",&numHijos);
	
	if(numHijos>=3) {
		printf("Por ser familia numerosa tiene un descuento del 30 por ciento en sus entradas\n");
		printf("Introduce el numero de entradas adultos (mayores de 12 anos): ");
		scanf("%d",&numEntradasAdultos);
		printf("Introduce el numero de entradas de ninos (menores de 12 anos): ");
		scanf("%d",&numEntradasNino);
		
		precioDescuentoF=numEntradasAdultos*precioAdulto+numEntradasNino*precioNino-((numEntradasAdultos*precioAdulto+numEntradasNino*precioNino)*0.3);
		printf("Su precio total es de %.2f euros\n",precioDescuentoF);
	}
	else if (numHijos<3) {
		printf("Introduzca su edad: ");
		scanf("%d",&edad);
		if(edad>=65) {
			printf("Por ser jubilado tiene un descuento del 50 por ciento\n");
			printf("Introduce el numero de entradas: ");
			scanf("%d",&numEntradasAdultos);
			
			precioDescuentoJ=(numEntradasAdultos*precioAdulto)-(numEntradasAdultos*precioAdulto*0.5);
			printf("Su precio total es de %.2f euros\n",precioDescuentoJ);
		}
		else if(edad<65){
			printf("Introduce el numero de entradas adultos (mayores de 12 anos): ");
			scanf("%d",&numEntradasAdultos);
			printf("Introduce el numero de entradas de ninos (menores de 12 anos): ");
			scanf("%d",&numEntradasNino);
			
			precioGeneral=numEntradasAdultos*precioAdulto+numEntradasNino*precioNino;
			printf("Su precio total es de %.2f euros\n",precioGeneral);
		}
	}
	printf("Gracias por su compra\n");
}


