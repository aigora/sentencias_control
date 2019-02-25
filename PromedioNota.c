/*
Autora: Noelia Arencibia
Grupo: Q103
Descripción: El programa hace el promedio de tres notas de hasta tres estudiantes
*/
#include <stdio.h>
int main(){
	int i,suma,nota1,nota2,nota3;
	float promedio;
	
	for(i=0;i<3;i++) {
		printf("Estudiante %i\n",i+1);
	
		printf("Nota 1:\n");
		scanf("%i", &nota1);
		printf("Nota 2:\n");
		scanf("%i", &nota2);
		printf("Nota 3:\n");
		scanf("%i", &nota3);
	
		suma=nota1+nota2+nota3;
		promedio=suma/3.0;
		
		
		printf("Promedio es %.2f\n", promedio);
		
		
		}
	}
