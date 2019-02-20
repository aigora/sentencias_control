/*Autor: Iván Herranz 
Grupo: Q103
Descripción: Te recuerda las asignaturas que tenemos los alumnos del grupo Q103 durante el 2º cuatrimestre en función del día de la semana*/

#include<stdio.h>

int main(){
	
	//Declaro y asigno variables
	 int x;
	
	printf("Sus clases de hoy son:\n Introduzca la posición de la semana en la que se encuentra (Ej:2)");
	scanf("%i",&x);
	if(x<=7){
		if(x=1){
		printf("Hoy es lunes y usted tiene: Informatica y Principios de procesos Químicos");
		}else if(x=2){
		printf("Hoy es martes y usted tiene: Ampliación y Física");
		}else if(x=3){
		printf("Hoy es miercoles y usted tiene: Estadistica e Informatica");
		}else if(x=4){
		printf("Hoy es jueves y usted tiene: Metodos numericos y Ampliación");
		}else if(x=5){
		printf("Hoy es viernes y usted tiene: Fisica y Estadistica\n Buen finde");
		}else if(x>=6){
		printf("Hoy es fin de semana: Agenda vacia");
	}
	}else {
	printf("Su introducción es incorrecta");
}
}
