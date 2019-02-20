/*Autora: Sandra Hueros Garcia
Grupo Q-103
Descripcion: Cuando puedo circular por Madrid central segun la edad de mi vehiculo 
*/
#include <stdio.h>

int main (){
	
	char letra; 
	int edad;
	
	printf("CUANDO PUEDO CIRCULAR POR MADRID CENTRAL\n");
	
	printf("Introduzca la primera letra de la matricula\n");
	fflush(stdin); 
	scanf("%c", &letra);
	
	printf("Introduzca la edad de su vehiculo\n");
	scanf("%d", &edad);
	
	
	if (edad > 10 && edad <= 15){
		printf("Puede circular lunes y miercoles\n"); 
	}
	else if (edad > 15){
		printf("No puede circular por Madrid Central\n");
	}
	else if (edad <= 10 && edad > 1){
		printf("Puede circular martes y jueves\n");
	}
	else if (edad <= 1){
		printf ("Puede circular todos los dias de la semana excepto domingos y festivos\n");
	}
	}	
	
	
