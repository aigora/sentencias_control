/*
Autor: Kevin Vejarano Montesinos
Grupo: Q103
Descripcion: He realizado un programa simulando una biblioteca virtual que te permite seleccionar diferentes categorias de libros segun su tematica.
*/

#include<stdio.h>

void main()
{
	int categoria, subcategoria;
	printf("Bienvenido a la biblioteca virtual.\n");
	printf("Seleccione la categoria que desee pulsando el numero correspondiente:\n 1-Hitoria\n 2-Ciencia\n 3-Politica\n 4-Filosofia\n 5-Novela\n 6-Economia\n Categoria: ");
	scanf("%d", &categoria);
	if (categoria==1)
	{
		printf("Usted ha seleccionado Historia\n");
		printf("Seleccione la subcategoria:\n 1-Natural\n 2-Contemporanea\n 3-Medieval\n 4-Historia del Arte\n Subcategoria:");
		scanf("%d", &subcategoria);
		if (subcategoria==1)		
			printf("Usted ha seleccionado Historia natural\n");		
		else if(subcategoria==2)		
			printf("Usted ha seleccionado Historia Contemporanea\n");		
		else if(subcategoria==3)		
			printf("Usted ha seleccionado Historia Medieval\n");		
		else if(subcategoria==4)
			printf("Usted ha seleccionado Historia\n");
		else
			printf("Error, vuelva a intentarlo...\n");
		
    }
	else if(categoria==2){
		printf("Usted ha seleccionado Ciencia\n");
		printf("Seleccione la subcategoria:\n 1-Quimica\n 2-Fisica\n 3-Ingenieria\n 4-Biologia\n 5-Matematicas\n Subcategoria: ");
		scanf("%d",&subcategoria);
		if (subcategoria==1)
			printf("Usted ha seleccionado Quimica\n");
		else if(subcategoria==2)
		    printf("Usted ha seleccionado Fisica\n");
		else if(subcategoria==3)
		    printf("Usted ha seleccionado Ingenieria\n");
		else if(subcategoria==4)
		    printf("Usted ha seleccionado Biologia\n");
		else if(subcategoria==5)
		    printf("Usted ha seleccionado Matematicas\n");
		else
		    printf("Error, vuelva a intentarlo...");
	}
	else if (categoria==3)
	{
		printf("Usted ha seleccionado Politica\n");
		printf("Seleccione la subcategoria:\n 1-Nacional\n 2-Internacional\n Subcategoria: ");
		scanf("%d", &subcategoria);
		if (subcategoria==1)		
			printf("Usted ha seleccionado Politica Nacional\n");		
		else if(subcategoria==2)		
			printf("Usted ha seleccionado Politica Internacional\n");
		else
		    printf("Error, vuelva a intentarlo...");
    }
    	else if(categoria==4){
		printf("Usted ha seleccionado Filosofia\n");
		printf("Seleccione la subcategoria:\n 1-Clasica\n 2-Moderna\n Subcategoria: ");
		scanf("%d",&subcategoria);
		if (subcategoria==1)
			printf("Usted ha seleccionado Filosofia Clasica\n");
		else if(subcategoria==2)
		    printf("Usted ha seleccionado Filosofia Moderna\n");
		else
		    printf("Error, vuelva a intentarlo...");
	}
	else if(categoria==5){
		printf("Usted ha seleccionado Novela\n");
		printf("Seleccione la subcategoria:\n 1-Clasica\n 2-Ciencia Ficcion\n 3-Fantastica\n 4-Terror\n 5-Comedia\n Subcategoria: ");
		scanf("%d",&subcategoria);
		if (subcategoria==1)
			printf("Usted ha seleccionado Novela Clasica\n");
		else if(subcategoria==2)
		    printf("Usted ha seleccionado Novela de Ciencia Ficcion\n");
		else if(subcategoria==3)
		    printf("Usted ha seleccionado Novela Fantastica\n");
		else if(subcategoria==4)
		    printf("Usted ha seleccionado Novela de Terror\n");
		else if(subcategoria==5)
		    printf("Usted ha seleccionado Novela de Comedia\n");
		else
		    printf("Error, vuelva a intentarlo...");
	}
	else if(categoria==6){
		printf("Usted ha seleccionado Economia\n");
		printf("Seleccione la subcategoria:\n 1-Microeconomia\n 2-Macroeconomia\n Subcategoria: ");
		scanf("%d",&subcategoria);
		if (subcategoria==1)
			printf("Usted ha seleccionado Microeconomia\n");
		else if(subcategoria==2)
		    printf("Usted ha seleccionado Macroeconomia\n");
		else
		    printf("Error, vuelva a intentarlo...");
	}
	else 
	    printf("Error al seleccionar categoria. Vuelva a intentarlo.");
}
