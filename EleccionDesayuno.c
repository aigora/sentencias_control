/*
Rita Villalba Roncal
Grupo: Q103

Descripción: Elección de desayuno entre diferentes opciones
*/

#include <stdio.h>

int main (){
	int pedido, desayuno, sirope, tipo;
	
	printf("Desea realizar un pedido: 1 Si, 2 No\n");
	scanf("%d", &pedido);
	
	if (pedido==1){
		printf ("Elija un desayuno: 1 Tortitas, 2 Huevos\n");
		scanf("%d", &desayuno);
		if (desayuno == 1) {
			printf("Escoja sirope: 1 Caramelo, 2 Chocolate, 3 Ninguno\n");
			scanf ("%d", &sirope);
			if (sirope==1){
			printf("En breves podra disfrutar de sus tortitas con caramelo");	
			}
			else if (sirope==2){
			printf("En breves podra disfrutar de sus tortitas con chocolate");	
			}
			else if (sirope==3){
			printf("En breves podra disfrutar de sus tortitas");	
			}
			else {
			printf ("Opcion incorrecta\n");
			}
		}
		
		else if (desayuno==2){ 
			printf ("Escoja tipo: 1 Fritos, 2 Revueltos\n");
			scanf ("%d", &tipo);
			if (tipo==1){
			printf("En breves podra disfrutar de sus huevos fritos");	
			}
			else if (tipo==2) {
				printf("En breves podra disfrutar de sus huevos revueltos");
			}
			else {
				printf ("Opcion incorrecta\n");
			}
		}
		
		else {
			printf ("Opcion incorrecta\n");
		}
	}
	
	else if (pedido==2) {
		printf("Hasta la proxima!\n"); 
	}
	
	else {
		printf ("Opcion incorrecta");
	}
	
}
	
