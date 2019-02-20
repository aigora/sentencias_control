/* autor: javier lopez fernandez
grupo: Q103
descripcion: este programa te regala unas vacaciones gratis segun tus gustos 
*/



#include <stdio.h>
int main(){
	int respuesta1, respuesta2;
	printf("quieres irte de vacaciones gratis? 1=si 2=no\n");
	scanf("%i",&respuesta1);
	if (respuesta1==2 ) {
		printf("pues nada amigo\n");
     if(respuesta1>2);{
		printf("pues no te vas a ningun lado por no saber poner bien un numero, tonto\n");
	}
	}
	if (respuesta1==1){
	printf("a donde quieres ir? playa o montaña? playa=1, montaña=2\n");
	scanf("%i",&respuesta2);
	if (respuesta2==1){
		printf("tu destino sera benidorm con los abuelitos\n");
	}
	if(respuesta2==2){
		printf("tu destino sera sierra nevada, que fresquito\n");
	}
	else if(respuesta2>2){
		printf("pues no te vas a ningun lado por no saber poner bien un numero, tonto\n");
		return 0;
	}
}
return 0;
	}
