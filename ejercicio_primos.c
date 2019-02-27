#include <stdio.h>

int main(){
	int a, i, mod=0;
	
	printf("Introduzca el numero que desea saber si es primo:\n");
	scanf("%d",&a);
	
	if(a>=2){
	
		for(i=2;i<a;i++){
			mod=a%i;
			
			if(mod==0){
				printf("El numero %d no es primo, es divisible entre %d", a, i);
				break;	
			}
			
		}
		
		if(mod!=0){
			printf("El numero %d es primo", a);
		}
	}
	else{
		("El numero %d no es ni primo ni compuesto", a);
	}
}
