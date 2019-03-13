//Autor: Kevin Vejarano Montesinos
//Grupo: Q-103
//Descripcion: El programa pide al usuario el numero de integrantes que forman un grupo y sus correspondientes numeros de DNI. El programa finaliza cuando el numero de DNI 
//             no corresponde a un determinado intervalo e indica error.

#include<stdio.h>
int main()
{

	int i,num_grupo,dni;
	do{
	printf("Indique numero del grupo de personas:\n");
	scanf("%d",&num_grupo);
    }
    while(num_grupo<=0);// si el numero de personas es 0 o el numero es negativo, se vuelve a pedir un numero al usuario.
	
	for(i=1;i<=num_grupo;i++)
	{
	if(dni>=0 && dni<=99999){
		printf("Numero de DNI integrante %d: ",i);
		scanf("%d",&dni);
	}
	else
	{
		printf("Error");
		break;	
	}
  
    }


}
