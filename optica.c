

/* 
Autor: Sergio Torres Madrazo
Grupo: Q103
Descripción: Una conocida optica de Madrid hace descuentos a sus clientes 
en funcion de su edad. 
Desde los 30 a los 39 años 30% de descuento, desde los 40 a los
49 años 40% de descuento, de los 50 a los 59 años 50% de descuento, 
mayores de 59 años 60% de descuento y el resto 20% de descuento 
sobre todas sus compras en la optica.
*/

#include<stdio.h>

int main(){
	
	float edad, compras,descuento,precio_final=0;
		
	printf("\t\t\tOptica BIEMEVES SL.\n");
	printf("\n\tCalculo de descuento segun la edad del cliente");
	printf("\n\nTeclee la edad del cliente:  ");
	scanf("%f",&edad);
	fflush(stdin);
	printf("\nTeclee el importe de sus compras: ");
	scanf("%f",&compras);
	
	if(edad>29 && edad<=39){
		descuento=compras * 0.3;
		precio_final= compras - descuento;
		printf("\nSu descuento es: %.f  por ciento",descuento);
		printf("\n\nSu precio final con descuento es: %.2f",precio_final);
	}
	else if(edad>39 && edad<=49){
		descuento=compras * 0.4;
		precio_final= compras - descuento;
		 printf("\nSu descuento es: %.f  por ciento",descuento);
		printf("\n\nSu precio final con descuento es: %.2f",precio_final);
	}
	else if(edad>49 && edad<=59){
		descuento=compras * 0.5;
		precio_final= compras - descuento;
		printf("\nSu descuento es: %.f  por ciento",descuento);
		printf("\n\nSu precio final con descuento es: %.2f",precio_final); 
	}
	else if(edad>59 ){
		descuento=compras * 0.6;
		precio_final= compras - descuento;
		printf("\nSu descuento es: %.f  por ciento",descuento);
		printf("\n\nSu precio final con descuento es: %.2f",precio_final);
	}
	else{
		descuento=compras * 0.2;
		precio_final= compras - descuento;
		printf("\nSu descuento es: %.f  por ciento",descuento);
		printf("\n\nSu precio final con descuento es: %.2f",precio_final);
		
	}	
			
		
	return 0;
} 
 
