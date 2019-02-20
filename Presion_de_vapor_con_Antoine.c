/*
Autora: Sophia Villanova
Grupo: Q103
Descripción: Calcula la presión de vapor de un gas mediante la ecuación de Antoine. 
*/
#include <stdio.h>
#include <math.h>

int main() {
	int c,  u;
	float t, A, B, C, L, P; 
printf("BIENVENIDO A LA CALCULADORA DE PRESION DE VAPOR: \n");
printf("Escoge el compuesto: \n");
printf("Si es Metano, introduce el numero 1 \n");
printf("Si es Etano, introduce el numero 2 \n");
printf("Si es Propano, introduce el numero 3 \n");
scanf("%d",&c); //c indica el compuesto seleccionado 
	if (c>3){
	printf("La opcion no es valida \n");
	}
	else{
	
	printf("Introduce la temperatura : \n");
	scanf("%f",&t); 
	printf("Si las unidades de temperatura son Centigrados, introduce el numero 4 \n");
	printf("Si las unidades de temperatura son Fahrenheit, introduce el numero 5 \n");
	printf("Si las unidades de temperatura son Kelvin, introduce el numero 6 \n");
	scanf("%d",&u); //u indica las unidades de temperatura seleccionadas
	}
		
		if (u>6||u<4){
		printf("La opcion no es valida \n");
		}
		else {
			if (u!=4) { //Conversion de las unidades de temperatura, ya que la ecuacion de Antoine programda requiere la temperatura en centigrados.  
				if (u==5){
				t=(t-32)*(5.0/9.0); //Conversion de Fahrenheit a Centigrados
				u=4;
				}
				else {
				t=t-273.15; //Conversion de Kelvin a Centigrados
				u=4;
				}
			}
		}
				
				if (c==1&&u==4) {
					A=3.76870; //Parametros de Antoine para el Metano
					B=395.744;
					C=266.681;
					L= A-(B/(C+t)); //Ecuacion de Antoine para el calculo de la presion de vapor de un compuesto, L es el Log base 10 de la presion de vapor
					P=pow(10,L); //Aplicamos la funcion inversa al Log base 10 para obtener la presion 
					printf("La presion de vapor del Metano en Bares es %.2f a %.2f Centigrados ",P, t);
				}
				else if (c==2&&u==4) {
					A=3.95405; //Parametros de Antoine para el Etano
					B=663.720;
					C=256.681;
					L= A-(B/(C+t));
					P=pow(10,L);
					printf("La presion de vapor del Etano en Bares es %.2f a %.2f Centigrados ",P, t);
				}	
				else if (c==3&&u==4) {
					A=3.92828; //Parametros de Antoine para el Propano
					B=803.997;
					C=247.040;
					L= A-(B/(C+t));
					P=pow(10,L);
					printf("La presion de vapor del Propano en Bares es %.2f a %.2f Centigrados ",P, t);
				}
	
}
	
	
