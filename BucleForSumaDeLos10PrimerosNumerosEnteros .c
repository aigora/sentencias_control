/*Autor: Covadonga González González
Grupo:Q103
Descripción: este programa imprime los 10 primeros números enteros
*/

#include<stdio.h>

int main(){
	
int num;
int suma=0;
for(num=0; num<=10; num++)
{
suma = suma + num;
}
printf("suma=%d\n",suma);

}
