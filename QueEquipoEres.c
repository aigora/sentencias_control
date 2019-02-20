#include<stdio.h>
int main(){
	//Autor: Diego Rodriguez de Tapia
	// Grupo: Q103
	//Descripcion: este programa te asocia un equipo segun el jugador que has elegido.
	int player;
	
	printf("choose a player Messi (1), Marcelo(2), Griezman(3):");
	scanf("%d",&player);
	if(player==1){
		printf("eres del barca\n");
		}
	else if (player==2)
	{
		printf("eres del magnifico real madrid\n");
	}
	else if (player==3){
		printf("eres del atleti\n");
	}
	else if (player!=1,2,3){
		printf("error 144");
	}
	}


