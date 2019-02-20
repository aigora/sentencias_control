/*Autora: Covadonga González González
Grupo: Q103
Descripción: selecciona un número para ver una película
*/
#include<stdio.h>

int main(){
	int pelicula;
	
	printf("introduzca un numero del 1 al 3: 1 dentro del laberinto, 2 solo en casa, 3 batman\n");
	scanf("%d", &pelicula);
	if (pelicula == 1){
		printf("disfrute de la pelicula dentro del laberinto\n");
		
	}
	else{
		if(pelicula ==2){
			printf("disfrute de la pelicula solo en casa\n");
			
		}
		else{
			if(pelicula==3){
				printf("disfrute de la pelicula batman\n");
			}
		}
	}
	printf("fin del programa");
}
