/* Autora: Laura Úbeda
Grupo: Q103 
Descripción: Este programa valora un examen en funcion de la nota que has sacado.*/

#include <stdio.h>

int main() {
  	int matricula;
  	float nota;
  	
	printf("Valoracion de tu examen\n");
	printf("Introduzca su matricula\n");
	scanf("%i", &matricula);
 	printf("Introduzca la nota del examen valorada del 1 al 10\n");
 	scanf("%f", &nota);
 	
 	if (nota < 5) {
 		printf("El alumno con matricula %i esta suspenso.\n", matricula);
	 } 
	 
	else {
		printf("El alumno con matricula %i esta aprobado", matricula);
	}
	
	 if (nota >= 5 && nota < 6) {
 		printf(" con los conocimientos suficientes.\n");
	 } 
	else if (nota >= 6 && nota < 7) {
 		printf(" con un buen examen.\n");
	 } 
	else if (nota >= 7 && nota < 9) {
 		printf(" y ha realizado su examen notablemente.\n");
	 } 
	else if (nota >= 9 && nota < 10) {
 		printf(" con un examen sobresaliente.\n");
     }
 	else if (nota == 10){
 		printf(" y ha obtenido una matricula de honor.\n", matricula);
	 } 
	return 0;
 }
