#include <stdio.h>
/*
Autor: Alonso Sánchez García
Grupo: Q103
Descripción: Introce su edad y te dice si estas en edad laboral o no
*/

int main(){
	int edad;
	printf("Introduzca su edad: ");
	scanf("%d",&edad);
	if(edad>=18){
		if(edad<=65)
		printf("Esta usted en edad laboral\n");
		else    
		printf("No esta usted en edad laboral\n");
	}
	else{
		printf("No esta usted en edad laboral\n");
	}
}
	

