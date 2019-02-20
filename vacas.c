/*Tomás Alda
Grupo Q103
Descripción: este programa diferencia el embarazo de una vaca y las separa por si hay posibles problemas en función de su peso y su edad.
*/
#include <stdio.h>
int main(){
	int pesomedio, num, peso;
	float edad;
	
	printf("introduzca el peso en kilos y el numero de la vaca que consta de cuatro digitos\n");
    scanf("%i",&peso);
    scanf("%i",&num);
    edad =num/300;
	if (peso>500){
		
	    if(edad <8){
			printf("primeriza, puede tener problemas, que pase al recinto B \n");
        }
		
        else{
			printf(" embarazada, que pase al recinto C \n");
        }   
	}
	else{
    printf("no esta embarazada, sacar del recinto A\n");
		
    }
	
}

