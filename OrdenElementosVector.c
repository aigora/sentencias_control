/*
Rita Villalba Roncal
Q103
Descripción: intercambio del rden de los elementos de un vector
*/

#include <stdio.h>

int main(){
	int v1[4]={1,2,3,4}, v2[4], i, j, aux;
	
	for (i=0; i<3; i++){
		for (j=i+1; j<4; j++){
			if (v1[i]<v1[j]){
				aux=v1[i];
				v1[i]=v1[j];
				v1[j]=aux;
			}
		}
	}
	
	printf("Vector 2: ");
	for(i=0; i<5; i++){
		v2[i]=v1[i];
		printf ("%d ", v2[i]);
	}
}

