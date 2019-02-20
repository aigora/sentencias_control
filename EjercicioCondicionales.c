#include <stdio.h>
// Autor: Javier Palomeque
// Grupo: Q103

int main() {
	int edad, coche;
	
	printf("Introduce tu edad\n");
	scanf("%i", &edad);
	
	if (edad < 18) {
		printf("No tienes edad para conducir\n");
	}
	else {
	    printf("Elige un coche: 1.Ferrari, 2.Lamborghini, 3.Audi, 4.Mercedes, 5.BMW\n");
	    scanf("%i", &coche);
	    if (coche == 1) {
	    	printf ("Disfruta de tu nuevo Ferrari\n");	
		}
	    else 
	    if (coche == 2) {
	    	printf ("Disfruta de tu nuevo Lamborghini\n");
	    }
		else
		if (coche == 3){
			printf ("Disfruta de tu nuevo Audi\n");
	    }  
	    if (coche == 4) {
	    	printf ("Disfruta de tu nuevo Mercedes\n");
	    }
		else
		if (coche == 5) {
	    	printf ("Disfruta de tu nuevo BMW\n");
	    }
    }
    
	printf("Fin del programa");
}
