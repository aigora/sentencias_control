#include <stdio.h>

// AUTOR: Iker Gorospe Mateos
// GRUPO: Q103
// DESCRIPCIÓN: Raciones de un bar


int main(){
	
	int Racion; 
	
	printf("Programa de Raciones de un Restaurante.\n\n");
	
	printf("Elige entre nuestras 3 raciones estrella, pulsa del 1 al 3 para descubrirlas.\n\n");
	scanf("%d", &Racion);
	
	
	if(Racion == 1){

		printf("Usted ha elegido una racion de calamares.\n\n");
		return 0;
			
	}else if(Racion == 2){
	
		printf("Usted ha elegido una racion de patatas bravas.\n\n");
		return 0;
			
	}else if(Racion == 3){
	
		printf("Usted ha elegido una racion de chopitos.\n\n");
		return 0;
	}
		
	else{
	
		printf("Actualmente no tenemos esa racion en la carta, vuelva otro dia para probarla.\n\n");
		return 0;
		
	}
	
	system("pause");
}
