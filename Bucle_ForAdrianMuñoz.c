/*
AUTOR:ADRIAN MUÑOZ
GRUPO: Q-103
*/

#include<stdio.h>
int main()  {  
 int i,a,b,r;  
 int suma=0;  
 printf("valores inicial final y razon:\n");  
 scanf("%d %d %d",&a,&b,&r); 
 
 for (i=a;i<=b;i*=r) 
  {   
 printf("%d ",i);   
 suma+=i;  
 } 
 printf("\nLa suma vale %d\n",suma); 
 } 
 
 /* Ejemplo Clase
 void main() {
 	int i;
 	
 	for(i=1; i<10; i++ ){
 		printf("%d\n", i);
	 }
 	
 } 
 */
 
 /*
 void main(){
 	int i, inicio=1, fin=10;
 	for(i=inicio; i<= fin; i++){
 		if(i%2 == 0)
 		   printf("%\n", i);
	 }
 }
 */
