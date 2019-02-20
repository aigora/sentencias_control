/*Autora:Andrea Fernandez Ortiz
Grupo:Q103
Descripcion:seleccion de peliculas
*/

#include<stdio.h>

int main(){
	int numero, pelicula;
	
	printf("SELECCIONADOR DE PELICULAS\n");
	printf("Introduce numero entre 0 y 8\n");
	scanf("%d", &numero);
	
	if(numero>8) {
		printf("ninguna pelicula asignada\n");
	}
	if(numero==0) {
		printf("Titanic\n");
	}
	if(numero==1) {
		printf("Lo que el viento se llevo\n");
	}
	if(numero==2) {
		printf("La vida es bella\n");
	}
	if(numero==3) {
		printf("La lista de Schindler\n");
	}
	if(numero==4) {
		printf("Forrest Gump\n");
	}
	if(numero==5) {
		printf("Intocable\n");
	}
	if(numero==6) {
		printf("El Rey Leon\n");
	}
	if(numero==7) {
		printf("Buscando a Nemo\n");
	}
	if(numero==8) {
		printf("Harry Potter y la piedra filosofal\n");
	}
	printf("FIN DEL PROGRAMA");
}
