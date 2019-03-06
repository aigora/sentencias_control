/*
Autora: Vanesa Díaz Baños
Grupo: Q103
Descripción: Suma dos vectores y hace la mdia de los dos.
*/

#include<stdio.h>

int main(){
	int i;
	float v1[5]={4,5,7,2,3}, v2[5], v3[5], v4[5];
	
	for (i=0; i<5; i++){
		printf("Introduce los elementos del vector\n");
		scanf("%f", &v2[i]);
	}
	
	for(i=0;i<5;i++)  {   
		v3[i]=v1[i]+v2[i];  
	} 
		
	printf("Vector3: ");  
	for(i=0;i<5;i++){
		printf("%f ",v3[i]);  
		printf("\n");
	} 
	
	for(i=0;i<5;i++)  {   
		v4[i]=(v1[i]+v2[i])/2;  
	} 

	printf("Vector4: ");  
	for(i=0;i<5;i++){
		printf("%f ",v4[i]);  
		printf("\n");
	} 
 
      
}
