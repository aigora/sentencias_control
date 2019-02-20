// Autor: David Carrillo Rodríguez 
// Grupo: Ingenieria quimica

#include <stdio.h> 
 
int main() 
{  
int edad, pagina;
  printf("Introduzca su edad: ");  
   scanf("%d",&edad); 
   
    if (edad<18) {   
	printf("No estas autorizado\n"); 
	 } 
	 
	 else {
	 printf("Elige una pagina: 1 Lectura, 2 Ropa, 3 Deporte\n");  
	 scanf("%d", &pagina);
	 if (pagina == 1) {
	 printf("Bienvenido a la pagina de lectura\n");
    }
    
	 if (pagina == 2) {
	printf("Bienvenido a la pagina de ropa\n");	
	}
	
     if (pagina == 3){
	    printf("Bienvenido a la pagina de deporte\n");
        }
}
	 printf("Fin del programa");
}
