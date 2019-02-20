#include <stdio.h>
#include <math.h>
/*
Autor:Diego Alarcon
Grupo:Q103
Descripcion: Este programa segun tu nota numerica te inidca si tienes un suspenso, un aprobado un 
notable o un sobresaliente.
*/
//empieza el main
int main() {
	//VARIABLES
	float nota;
	
printf("Este programa indica si tiene un aprobado notable o sobresaliente segun su nota\n");
printf("Introduce su nota:\n");
scanf("%f", &nota);
if(nota<0||nota>10){
	printf("Numero no valido");
}
else if (nota<5) {
	printf("Tiene la asignatura suspensa");
	}
	else if(nota>=5&&nota<7){
	printf("Tiene un aprobado");
}
	else if(nota>=7&&nota<9){
		printf("Tiene un notable");
}
	else 
		printf("Tiene un sobresaliente");
}
	
	
	


