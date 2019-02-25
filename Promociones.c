/*ANDREA BLAS MURILLO 
Q-103 
DEscripción: Permite saber si has obtenido alguna promocion.*/


#include<stdio.h>

int main(){
	int hijos, oferta;
	
	printf("Introduzca su numero de hijos\n");
	scanf("%d", &hijos);
	
	if(hijos>3){
		printf("No hay ofertas\n");
		
	 }
	 else{
		printf("Elige tu oferta: 1.Entradas gratis de cine 2.Rebajas en restaurantes 3. Descuentos en viajes\n ");
		scanf("%d", &oferta);
		if (oferta==1){
			printf("Consigue tus entradas gratis\n");
		}
	 
	 else {
		if(oferta==2){
			printf("Consigue rebajas para tus restaurantes favoritos\n");
		}
	else{
		if(oferta==3){
			printf("Consigue descuentos para viajes\n");
		}
	}
    }
 }
    
    printf("fin del programa");
    
}
