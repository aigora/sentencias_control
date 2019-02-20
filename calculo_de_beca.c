#include <stdio.h>
/*
Autora: Ester Ruiz
Grupo: Q103
Descripción: calcula la beca de la que dispone en usuario en función de sus características
*/
int main(){
	int estudios, familianum, renta, positivo, negativo, si, no;
	positivo=si;
	negativo=no;
	printf("Calcula aproximadamente tu beca:\n");
	printf("Elige la opcion que estes estudiando: 1 eso, 2 bachillerato, 3 grado superior, 4 grado universitario\n");
	scanf("%d", &estudios);
	if(estudios==1){
		printf("Eres familia numerosa?\n");
		scanf("%d", &familianum);
		if(familianum==positivo){
			printf("Tu beca estara entre 200 y 300 euros\n");
	}
			else{
				printf("No te corresponde ninguna beca\n");
			}
	}
		else{
			if(estudios==2){
				printf("Eres familia numerosa?\n");
				scanf("%d", &familianum);
				fflush(stdin);
			    printf("Tu renta anual es inferior a 12000 euros?\n");
			    scanf("%d", &renta);
			    if(familianum==positivo && renta==positivo){
				printf("Tu beca estara entre 1000 y 1500 euros\n");
			}
				else{
					printf("Tu beca estara entre 600 y 800 euros\n");
				}
			}
			if(estudios==3){
				printf("Eres familia numerosa?\n");
				scanf("%d", &familianum);
				fflush(stdin);
			    printf("Tu renta anual es inferior a 12000 euros?\n");
			    scanf("%d", &renta);
			    if(familianum==positivo&&renta==positivo){
				printf("Tu beca estara entre 2000 y 2500 euros\n");
			}
				else{
					printf("Tu beca estara entre 800 y 1000 euros\n");
				}
			}
			if(estudios==4){
		    printf("Eres familia numerosa?\n");
		    scanf("%d", &familianum);
		    fflush(stdin);
			printf("Tu renta anual es inferior a 12000 euros?\n");
			scanf("%d", &renta);
			if(familianum==positivo && renta==positivo){
				printf("Tu beca estara entre 2000 y 2500 euros\n");	
			}
			else{
				printf("Tu beca estara entre 800 y 1000 euros\n");
				}
				
			}
		    	
		    
		}
	}

