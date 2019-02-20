
/* Autor: Aadnan Talib Rizqui
Grupo: Q103
Descripcion: Calcular el mayor de dos numeros leidos del tecleado y visualizarlo en pantalla*/

#include<stdio.h>

int main(){
	int num1,num2;
	
	printf("QUE NUMERO ES MAYOR??\n");
	
	printf("\nDigite dos numeros:\n");
	scanf("%i \n %i",&num1,&num2);
	
	
	if(num1>num2){
		printf("\nEl mayor es %i",num1);
	}
	else{
		if(num2>num1){
			printf("\nEl mayor es %i",num2);
		}
	
		else
		printf("\nLos dos numeros son iguales.");
	}
	return 0;
}
