#include <stdio.h>
/*
Autora: Ester Ruiz
Grupo: Q103
Descripción: el usuario introduce una letra y el programa imprime el nombre de un animal que comience con dicha letra
*/
int main(){
	char letra;
	printf("Introduce tu letra:\n");
	scanf("%c", &letra);
	letra = toupper(letra);
	switch (letra){
		case 'A':
			printf("Aveja");
			break;
		case 'B':
			printf("Burro");
			break;
		case 'C':
			printf("Conejo");
			break;
		case 'D':
			printf("Dromedario");
			break;
		default:
			printf("Letra no disponible");
			break;		
			
	}
}
