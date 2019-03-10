/* Maria Cruz Batista Gil
Grupo: Q103
Descripción: Este programa te indica si la letra introducida es vocal o consonante. */ 

#include <stdio.h>

int main(){
	
	char letra, consonante;
	
	printf("Introduzca una letra: \n");
	scanf("%c", &letra);
	
	letra != ('a', 'e', 'i', 'o', 'u');
	
	if (letra != 'a' &&letra != 'e'&& letra != 'i' &&letra != 'o'&& letra != 'u' ){
		printf("consonante");
	}
	else{
		printf("vocal");
	}
	
}
