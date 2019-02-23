/* Autor: Hugo García Las Heras 53344
Grupo: Q-203
Descripción: Se trata de un programa que permite a dos jugadores jugar al juego de piedra, papel o tijera */
#include <stdio.h>
int main ()
{
char jugador1, jugador2  ;
printf("Introduzca la jugada de los dos jugadores(Papel,P,Tijera,T,Piedra,I) separada por comas\n");
scanf("%c,%c",&jugador1,&jugador2);
	
if((jugador1=='P')&&(jugador2=='I'))
printf("P-I.Papel envuelve la piedra, gana jugador1\n");

else if ((jugador1=='T')&&(jugador2=='P'))
   printf("T-P.Tijera corta a papel, gana jugador1\n");
	
else if ((jugador1=='I')&&(jugador2=='T'))
   printf("I-T.Piedra machaca a tijera, gana jugador1\n");
	
else if ((jugador1=='I')&&(jugador2='P'))
	printf("I-P.Piedra envuelta por piedra, gana jugador2\n");
	
else if ((jugador1=='P')&&(jugador2=='T'))
	printf("P-T.Papel es cortado por tijera, gana jugador2\n");
	
else if ((jugador1=='T')&&(jugador2=='I'))
	printf("T-I.Tijeras son machacadas por piedra, gana jugador2 \n");
	
else if ((jugador1=='P')&&(jugador2=='P'))
    printf("P-P.Se produce un empate\n");
    
else if ((jugador1=='I')&&(jugador2=='I'))
    printf("I-I.Se produce un empate\n");

else if ((jugador1=='T')&&(jugador2=='T'))
    printf("T-T.Se produce un empate\n");

else
	printf("La tecla introducida no corresponde a ninguna del juego, error\n");
return 0;
}
