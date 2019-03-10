/* Maria Cruz Batista Gil
Grupo: Q103
Descripción: Este programa te permite realizar la operación deseada, mediante dos números introducidos por el usuario.*/

#include <stdio.h>
#include <math.h>

void main (){
	
	float numero1, numero2, suma, resta, multiplicacion, division, potencia;
	int operacion;
	
	printf("Introduzca el primer numero: \n");
	scanf("%f", &numero1);
	
	printf("Introduzca el segundo numero: \n");
	scanf("%f", &numero2);
	
	printf("Elija la operacion a realizar: 1 Suma, 2 Resta, 3 Multiplicacion, 4 Division, 5 Potencia \n");
	scanf("%i", &operacion);
	
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;
	potencia = pow (numero1,numero2);
	
	
	if (operacion == 1){
		printf("La suma es: %.2f", suma);
	}
	
	else if (operacion == 2){
		printf("La resta es: %.2f", resta);
	}
	
	else if (operacion == 3){
		printf("La multiplicacion es: %.2f", multiplicacion);
	}
	
	else if (operacion == 4){
	
		printf("La division es: %.2f", division);
	}
	else if (operacion == 5){
		printf("La potencia es: %.2f", potencia);
	}
	else{
		printf("Error");
	}
	
}
