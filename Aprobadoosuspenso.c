/*
Autor: Miguel Valiente Alfageme
Curso: Q103
Descripcion:Calcula la nota media de tres examenes y te dice si has aprobado o suspendido */

#include <stdio.h>
int main(){
	float nota1,nota2, nota3, media;
	
	printf("Introduce tu nota del primer examen: \n");
	scanf("%f",&nota1);
	printf("Introduce tu nota del segundo examen: \n");
	scanf("%f",&nota2);
	printf("Introduce tu nota del tercer examen: \n");
	scanf("%f",&nota3);
	media= (nota1 +nota2+nota3)/3;
	if (media<5)
	{
		printf("tu nota media es %f , has suspendido la asignatura", media);
	}else 
	{
		printf(" Has sacado un %f de nota media, enhorabuena, has aprobado ", media);
	}
	return 0;
}
