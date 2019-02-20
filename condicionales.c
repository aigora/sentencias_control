#include <stdio.h>
int main(){

	float media;
	int deporte;
	
	printf("Bienvenido al progama de becas de la etsidi, introduzca su nota media:\n");
	scanf("%f",&media);
	if (media<5){
		printf("lo sentimos no podemos ofrecerle una beca\n") ;return 0;
	}	  else 
        	printf("de acuerdo, para una beca de futbol pulse 1 , para baloncesto pulse 2 y para    tenis pulse 3:\n");
   	        scanf("%d",&deporte);
	if (deporte<4){ 
		printf("Le enviaremos toda la informacion sobre la beca gracias por contar con nosotros\n");
	   } 
   else
      printf("lo sentimos no tenemos becas para ti esperamos que encuentres tu beca\n");
	

					
	}
	
	

