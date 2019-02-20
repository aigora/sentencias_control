/* MARIA CRUZ BATISTA GIL.
GRUPO: Q103
Descripción: Al seleccionar entre playa y montaña te enseña varios sitios a visitar.*/


#include<stdio.h>


void main (){
	int viaje, destino, lugar;
	float presupuesto;
	
	printf("Te gusta viajar: 1 Si  2 No \n");
	scanf("%d", &viaje);
	
	
	if (viaje == 2){
		
		printf("Vaya, que pena \n");
		
	}
	else {
		
		printf("Elige un destino: 1 Playa, 2 Montanna\n");
		scanf("%d", &destino);
		
	 if (destino == 2){
			
		printf("Continente: 1 Europa, 2 America, 3 Africa \n");
		scanf("%d", &lugar);
		
		 if (lugar== 1){
		 	
		 	printf("Visitar : Dolomitas(Italia)\n");
		 	
		 	printf("Parque Natural de Somiedo (Espanna)\n ");
		 	
		 	printf("El Cervino (Suiza)\n");
		 }
		 else if (lugar == 2){
		 	printf("Visitar: Los Andes (Peru)\n");
		 	printf("Monte Elbert (Estados Unidos)\n ");
		 	printf("Monte Rainier (Estados Unidos)\n");
		 }
		 else if (lugar==3){
		 	printf("Visitar: Monte Kilimanjaro (Tanzania\n");
		 	printf("Las Cataratas Victoria (entre Zambia y Zimbabue)\n ");
		 	printf("Parque nacional de Tsingy (Bemaraha)\n");
		 }
		}
	    else{
		  printf("Cuanto dinero te quieres gastar: \n");
		  scanf("%f", &presupuesto);
		
		   if (presupuesto <= 1500){
			printf ("Visitar: Playa de la concha (Espanna)\n");
			printf("Navagio (Grecia)\n");
			printf("Praia da Adraga (Portugal)\n");
		   }
		   
	else{
	   	printf ("Visitar: Punta Cana (Republica Dominicana)\n");
			printf("Kuta (Bali)\n");
			printf("Praia do Rosa (Brasil)\n");
		
	    }
	}
}
}
