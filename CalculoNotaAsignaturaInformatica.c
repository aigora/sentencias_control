//Marina Polo Vera Q103
//Calculo de la nota de la asignatura de Informatica

#include<stdio.h>
int main (){
    float nota_examen_1, nota_examen_2, nota_trabajo, nota_pruebas_extra, nota_asignatura;
    printf("Introduzca la nota obtenida en el primer parcial\n");
    scanf("%f",&nota_examen_1);
    if(nota_examen_1>=2){
        printf("Tu nota del primer parcial se guarda para hacer media\n\n"); }
    else {
        printf("Tu nota del primer parcial no sirve para hacer media\n\n");}
    
    
    printf("Introduzca la nota obtenida en el segundo parcial\n");
    scanf("%f",&nota_examen_2);
    if(nota_examen_2>=2){
        printf("Tu nota del segundo parcial se guarda para hacer media\n\n");}
    else {
        printf("Tu nota del segundo parcial no sirve para hacer media\n\n");}
    
    
    printf("Introduzca la nota obtenida en el trabajo\n");
    scanf("%f",&nota_trabajo);
    if(nota_trabajo>=5){
        printf("Tu trabajo esta aprobado\n\n");}
    else {
        printf("Tu trabajo esta suspenso\n\n");}
    
    
    printf("Introduzca la nota de las pruebas extra\n");
    scanf("%f",&nota_pruebas_extra);
    if(nota_pruebas_extra>=5){
        printf("Esta nota cuenta para hacer media\n\n");}
    else {
        printf("Esta nota no cuenta para hacer media\n\n");}
    
    nota_asignatura=((nota_examen_1)*0.25+(nota_examen_2)*0.35+(nota_trabajo)*0.3+(nota_pruebas_extra*0.1));
    
    
    printf("Tu nota en la asignatura seria: %.1f\n", nota_asignatura);
    printf("Aunque la media de >= 5 solo se puede hacer media si todas las partes estan aprobadas");
    
    return 0;
}
