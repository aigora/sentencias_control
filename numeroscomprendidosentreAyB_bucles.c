#include <stdio.h>
int main() {
	int n,i,a=0,b=100;
	do
	{
	printf("Introduce un numero entero\n");
	scanf("%d",&n);
	}
	while(n < 1);
			
	for(i = a;i <= b;i += n)
	printf("%d\t",i);

	return 0;
}
