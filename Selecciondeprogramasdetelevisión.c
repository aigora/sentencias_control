/*
Autora:Carlota Stocks Galvan
Grupo:Q103
Descripción:Formula mrua
*/
#include <stdio.h>

int main(){
	int numero;
	int canaldetelevision;
	printf("SELECCIONADOR DE CANAL DE TELEVISIÓN\n");
	printf("Introducir un número entre el 1 y el 9\n:");
	scanf("%d", &numero);
	
	if(numero<1){
		printf("FIN DEL PROGRAMA");
	}
	if(numero>9){
		printf("FIN DEL PROGRAMA");
	}

	if(numero==1){
		printf("Television española\n");
	}
	if(numero==2){
		printf("La dos\n");
	}
	if(numero==3){
		printf("Antena tres\n");
	}
	if(numero==4){
		printf("Cuatro\n");
	}
	if(numero==5){
		printf("Telecinco\n");
	}
	if(numero==6){
		printf("La sexta\n");
	}
	if(numero==7){
		printf("DiscoveryMAX\n");
	}
	if(numero==8){
		printf("Clantve\n");
	}
	if(numero==9){
		printf("Boing\n");
	}
printf("FIN DEL PROGRAMA");
}



