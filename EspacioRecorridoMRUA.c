/*
Autora: Vanesa Díaz Baños
Grupo: Q103
Descripción: Ejercicio en el que se usa el bucle for para calcular el un punto por cada segundo de tiempo
*/

#include<stdio.h>
#include<math.h>

int main(){
	float x,x0,t,v,a;
	
	printf("Vamos a calcular el espacio recorrido por un cuerpo cada segundo\n");
	printf("Introduce la velocidad inicial(v): ");
	scanf("%f",&v);
	printf("Introduce el punto inicial(x0): ");
	scanf("%f",&x0);
	printf("Introduce la aceleracion(a): ");
	scanf("%f",&a);
	
	for(t=0;t<=10;t++){
		x=x0 +v*t+(0.5*a*pow(t,2));
		printf("El espacio recorrido en el tiempo %.2f es: %.2f\n",t,x);
	}
}
