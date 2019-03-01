
/*Autor: María Fermosel Álvarez 53244
Grupo: Q-103
Descripción: Juego de piedra-papel-tijera para dos jugadores*/ 

int main()
{
	char op1, op2;
	printf("vamos a jugar a piedra papel tijera\n");
	printf("introduce (i) para piedra, (p) para papel y (t) para tijera")
	printf("primero elige el jugador 1 y luego el\n");
	scanf("%c,%c\n", &op1, &op2);

	
	switch(op1)
	{
	
	case'i':
		{
			switch(op2)
			{
			
			case'i':
				printf("empate");
			break;
			case'p':
				printf("p-i. El papel gana a la piedra, gana el jugador 2");
			break;

			case't':
				printf("t-i. Las tijeras ganan a la piedra, gana el jugador 1");
			break;
		}
		}
	break;
	case'p':
		{
			switch(op2)
			{
			
			case'p':
				printf("empate");
			break;

			case'i':
				printf("p-i. El papel gana a la piedra, gana el jugador 2");
			break;

			case't':
				printf("t-p. Las tijeras ganan al papel, gana el jugador 1");
			break;
		}
		}
	break;
	case't':
		{
			switch (op2)
			{
			
			case't':
				printf("empate");
			break;

			case'i':
				printf("i-t. La piedra gana a las tijeras, gana el jugador 2");
			break;

			case'p':
				printf("t-p. Las tijeras ganan al papel, gana el jugador 1");
			break;
		}
		
		}
	break;
	}
	
	return 0;
	}


		

