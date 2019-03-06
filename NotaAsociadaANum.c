#include <stdio.h>


int main(){
	int n;
	
	do{
		printf("Introduzca nota:");
		scanf("%d", &n);
		
		switch (n){
			case 0: printf("Muy deficiente\n");
				break;
			case 1: printf("Muy deficiente\n");
				break;
			case 2: printf("Insuficiente\n");
				break;
			case 3: printf("Insuficiente\n");
				break;
			case 4: printf("Insuficiente\n");
				break;
			case 5: printf("Suficiente\n");
				break;
			case 6: printf("Suficiente\n");
				break;
			case 7: printf("Notable\n");
				break;
			case 8: printf("Notable\n");
				break;
			case 9: printf("Sobresaliente\n");
				break;
			case 10: printf("Sobresaliente\n");
				break;
			default: printf("Numero incorrecto\n");
		}
	}
	while (n>=0);
		printf("fin del programa");






}

