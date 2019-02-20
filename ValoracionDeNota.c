/*Autora: Hanan El Boudakhani Ballafkih
 nº54576
 descripcion: Introduce una nota del 1-10 para decirte si estás aprobado o no */


#include <stdio.h>
int main(){
	float nota;
	printf("Introduzca la nota de su examen del uno al diez con dos decimales:\n");
	scanf("%.2f",&nota);
	if (nota<0){
		printf("Introduzca una nota correcta xfa ");
	}
	else if(nota < 5){
		printf("Lo siento has suspendido");
	}
	else if (5>=nota&&nota<=9){
		printf("Enhorabuena has aprobado\n");
	}
	else if(nota==10){
		printf("Has aprobado. Ademas tienes Matricula de Honor");
		}
	
	else if (nota>10){
		printf("Introduzca una nota correcta xfa ");
	}
	return 0;
}
