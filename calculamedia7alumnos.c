/*Raquel Robledo Sedano
 Q-103
 Descripción: Calcula la media de siete alumnos en el examen de matematicas.*/
#include <stdio.h>

void main(){
	
	float nota,notaMedia,sumaNotas;
	int i;
	for (i=1; i<8; i++){
		printf("Introducir la nota del primer examen de matematicas del alumno %i:",i);
		scanf("%f",&nota);
		
			sumaNotas=sumaNotas+nota;
	}
	
	notaMedia= sumaNotas/7;
	printf("La nota media del primer examen de matematicas en segundo de bachillerato de ciencias es %f ", notaMedia);
	
	
}
