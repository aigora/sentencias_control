/*
autor: Pedro Muñoz Redondo
grupo: Q103
numero matricula: 54121
descripción: juego de piedra papel y tijera
*/
#include <stdio.h>
int main()
{
	int jugador1,jugador2;
	printf("1 jugador: piedra(1), papel(2), tijera(3)\n");
	scanf("%d",&jugador1);
	printf("2 jugador: piedra(1), papel(2), tijera(3)\n");
	scanf("%d",&jugador2);
	if(jugador1 == 1 && jugador2==1)
	{
		printf("empate");
	}
	else if(jugador1 ==2 && jugador2==2)
	{
		printf("empate");
	}
	else if(jugador1 ==3 && jugador2==3)
	{
		printf("empate");
	}
	else if(jugador1 ==1 && jugador2==2)
	{
		printf("gana papel jugador 2");
	}
	else if(jugador1 ==1 && jugador2==3)
	{
		printf("ganan piedra jugador 1");
	}
	else if(jugador1 ==2 && jugador2==1)
	{
		printf("gana papel jugador 1");
	}
	else if(jugador1 ==2 && jugador2==3)
	{
		printf("gana tijera jugador 2");
	}
	else if(jugador1 ==3 && jugador2==1)
	{
		printf("gana piedra jugador 1");
	}
	else if(jugador1 ==3 && jugador2==2)
	{
		printf("gana tijera,jugador 2");
	}
	else
		printf("opcion incorrecta");
	return 0;
}
