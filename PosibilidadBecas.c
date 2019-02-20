/*Raquel Robledo Sedano
 Q-103
 Descripción: A partir de tu nota de bachillerato y nota de la PAU te hace sus respectivos porcentajes y te dice si estas dentro
  de las condiciones para obtener becas, ademas de darte a lejir que carreras con becas hay*/

#include <stdio.h>

void main(){
	
	int becas;
	float notaBach, notaPau, notaMEDIA;
	
	printf("Introducir la nota media de bachillerato:\n");
	scanf("%f", &notaBach);
	
	printf("Introducir tu nota de la PAU sin tener en cuenta las especificas:\n");
	scanf("%f", &notaPau);
	
	notaMEDIA= 0.6*notaBach + 0.4*notaPau;
	printf("La nota obtenida entre la Pau y Bachillerato sobre diez es:%f\n", notaMEDIA);
	
	if(notaMEDIA<8){
			printf("no hay becas para una media con esa nota\n");
	}
	else{
		printf("elige el grado que quiere cursar: 1.Ingenieria 2.Derecho 3.Medicina 4.ADE\n");
		scanf("%d", &becas);
		if (becas==1){
			printf("Esta dentro de las condiciones para obtener una beca para la universidad,ya nos pondremos en contacto.\n");
		 }
	else{
		if(becas==2){
			printf("Esta dentro de las condiciones para obtener una beca para la universidad,ya nos pondremos en contacto.\n");	
		}
	else{
		if(becas==3){
			printf("Esta dentro de las condiciones para obtener una beca para la universidad, ya nos pondremos en contacto.\n");
		}
	else{
		if(becas==4){
			printf("Esta dentro de las condiciones para obtener una beca para la universidad, ya nos pondremos en contacto.\n");
		}
	}
	}
	}
	}
	printf("fin del programa");
}
