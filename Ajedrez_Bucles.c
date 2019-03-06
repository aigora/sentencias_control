/*Marcos Calderón Jimeno Q203
Realiza un tablero de ajedrez con fichas negras y blancas*/

#include <stdio.h>
#define C 8
#define F 8
void main()
{
	int f,c,x;
	char letra1 = 'B';
	char letra2 = 'N';
	int ajedrez [F][C];
	
	for (f=0; f<8; f++)
	{
			for (c=0; c<8;c++)
			{
				x = f+c;
				if (x%2 == 0)
				{				
					printf("%c\t",letra1);
				}
				else
				{
					printf("%c\t",letra2);
				}
			}
		printf("\n\n");
	
	}
}
