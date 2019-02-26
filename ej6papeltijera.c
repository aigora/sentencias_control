/*
Autor: Manuel Dégano
Grupo: Q103
Descripción: Este programa imprime el juego de piedra papel o tijera
*/

#include <stdio.h>f

void main()
 {
 	int J, j;
 	
 	printf("J=jugador 1\n");
 	printf("j=jugador 2\n");
 	printf("1=piedra\n");
 	printf("2=papel\n");
 	printf("3=tijera\n");
 
 	printf("que elige jugador 1\n");
 	scanf("%i", &J);
	printf("que elige jugador 2\n");
 	scanf("%i", &j);

 	
 switch(J)
 	{
 	case 1:
 		switch(j)
 		{
		 case 1:
		 	printf("hay empate");
		 	break;
		 case 2:
		 	printf("papel gana piedra, gana jugador 2");
		 	break;
		 case 3:
 			printf("piedra gana tijeras, gana jugador 1");
 			break;
		 }
		 break;
	 case 2:
		 switch(j)
 		{
		 case 1:
		 	printf("papel gana a piedra, gana jugador 1");
		 	break;
		 case 2:
		 	printf("hay empate");
		 	break;
		 case 3:
			printf("tijeras gana a papel, gana jugador 2");
			break;
		 }
		 break;
	 case 3:
		 switch(j)
 		{
		 case 1:
		 	printf("piedra gana a tijeras, gana jugador 2\n");
		 	break;
		 case 2:
			printf("tijeras gana a papel, gana jugador 1\n");
			break;
		 case 3:
		 	printf("hay empate\n");
		 	break;
		 }
		 break;
 	}	 
 }	 
