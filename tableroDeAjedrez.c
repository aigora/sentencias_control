//Autora: Dalila Martinez Baez Q103
//Crea un tablero de ajedrez
#include<stdio.h>
int main()
{
	int fila,columna;
	for(fila = 0; fila < 8; fila++)
	{  
        for(columna=0; columna < 8; columna++) //se queda en este buvñe fila=1 hasta que columna  llega a 8 y entra en fila
            if ((fila+columna)%2 == 0) { //si la columna y la fila es par imprimer blanco
            printf("B \t"); //t para tabular y que este separado
         } else {
            printf("N \t");//si la columna y la fila es impar imprime negro
            
         } 
        printf("\n\n"); //cuando acaba el for de columna hace salto de linea  
   }
	return 0;
}
