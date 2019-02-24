#include<stdio.h>

void main(){
	
	int x,y;
	
	for(x=1;x<=10;x++){
	
	printf("tabla del %d \n",x);
	
	for(y=1;y<=10;y++){
		printf("%d x %d = %d\n",x,y,x*y);
	}
	
	}
}
