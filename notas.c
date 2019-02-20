/*
Autor: Fernando Casillas Juan
Grupo: Q103
Descripción: Ingresar nota y te sale tu resultado
*/

#include <stdio.h>
int main()
{
    float nota;

    printf("Ingrese la nota: ");
    scanf("%f",&nota);
    
   
    if(nota >= 9 && nota <= 10)
    printf("Sobresaliente\n");
    
        //else 
		if(nota >= 7 && nota < 9)
        printf("Notable\n");
        
         //else 
		 if(nota >= 6 && nota < 7)
          printf("Bien\n");
          
           //else 
		   if(nota >= 5 && nota < 6)
            printf("Suficiente\n");
            
            // else 
			 if (nota >= 0 && nota < 5)
              printf("Suspenso\n");

}
