#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	int edad, mesa;
	printf("Introduce tu edad\n");
	scanf("%d", &edad);
	
	if (edad<18){
		printf("No estas autorizado\n");
		return 0;
	}
	else {
		printf("Bienvenido a la ruleta: elige tu mesa 1, 2,3 \n");
		scanf("%d", &mesa);
		if (mesa==1){
		printf("Casino de Torrelodones: elige un numero: \n");
		{
    int x,num,contador=0;
    float apuesta;
    srand((unsigned)time(NULL));
         x=rand()%(37);
         printf("Introduce tu apuesta\n");
         scanf("%f", &apuesta);
    printf("Elige un numero del 0 y 37.");
         int bandera=0;
         while (bandera==0){
                   printf("\n\nIntroduce numero: ");
                   scanf("%d",&num);
                   contador++;
                   if(num>x){
                            printf("\nMenor pierdes 5$");
                   }else if(num<x){
                            printf("\nMayor pierdes 10$");     
                   }else if(num=x){
                   	printf("\nGanas 100$ por euro apostado");
				   }else{
                            printf("\n\nEnhorabuena! Lo has adivinado en %d intentos.\n\n",contador);
                            bandera=1;
                   }
         }
}
		
		}
		else {
		 if (mesa ==2){
		printf("Las Vegas: elige un número\n");
		int x,num,contador=0;
    float apuesta;
    srand((unsigned)time(NULL));
         x=rand()%(37);
         printf("Introduce tu apuesta\n");
         scanf("%f", &apuesta);
    printf("Elige un numero del 0 y 37.");
         int bandera=0;
         while (bandera==0){
                   printf("\n\nIntroduce numero: ");
                   scanf("%d",&num);
                   contador++;
                   if(num>x){
                            printf("\nMenor pierdes 5$");
                   }else if(num<x){
                            printf("\nMayor pierdes 10$");     
                   }else if(num=x){
                   	printf("\nGanas 100$ por euro apostado");
				   }else{
                            printf("\n\nEnhorabuena! Lo has adivinado en %d intentos.\n\n",contador);
                            bandera=1;
                   }
         }
		}
			else{
		printf("Atlanta City\n");
		int x,num,contador=0;
    float apuesta;
    srand((unsigned)time(NULL));
         x=rand()%(37);
         printf("Introduce tu apuesta\n");
         scanf("%f", &apuesta);
    printf("Elige un numero del 0 y 37.");
         int bandera=0;
         while (bandera==0){
                   printf("\n\nIntroduce numero: ");
                   scanf("%d",&num);
                   contador++;
                   if(num>x){
                            printf("\nMenor pierdes 5$");
                   }else if(num<x){
                            printf("\nMayor pierdes 10$");     
                   }else if(num=x){
                   	printf("\nGanas 100$ por euro apostado");
				   }else{
                            printf("\n\nEnhorabuena! Lo has adivinado en %d intentos.\n\n",contador);
                            bandera=1;
                   }
         }
		
	} 
		
		
	}
		
	
	
	}
	printf("Fin del programa");
	return 0;
}
