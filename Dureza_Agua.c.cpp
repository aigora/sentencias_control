/*
Autor: Carlos Cruz Bojana
Grupo: Q103
Descripción: Programa que calcula la dureza del agua.
*/

#include <stdio.h>
#include <math.h>

int main () {
	
	float V_muestra, M_edta, V_edta, n_edta_total, M_CaCl2, V_CaCl2, n_CaCl2, n_edta, Calcio_agua;
	
	const float PM_Ca=40.078; // Peso molecular del calcio
	
	printf("CALCULO DE LA DUREZA DEL AGUA DE UNA MUESTRA PROBLEMA\n");
	
	printf("Introduzca el volumen en mililitros de la muestra problema de agua:\n");
	scanf("%f", &V_muestra);
	
	printf("Introduzca la concentracion [moles por litros] de EDTA (en exceso) vertido a la muestra problema:\n");
	scanf("%f", &M_edta);
	printf("Introduzca el volumen en mililitros de EDTA (en exceso) vertido a la muestra problema:\n");
	scanf("%f", &V_edta);
	n_edta_total=M_edta*V_edta*1e-3; // Moles totales de EDTA
	
	printf("Introduzca la concentracion [moles por litros] de cloruro de calcio utilizado en la valoracion\n");
	scanf("%f", &M_CaCl2);
	printf("Introduzca el volumen en mililitros de cloruro de calcio utilizado en la valoracion:\n");
	scanf("%f", &V_CaCl2);
	n_CaCl2=M_CaCl2*V_CaCl2*1e-3; // Moles totales de cloruro de calcio
	
	n_edta=n_edta_total-n_CaCl2; // Como la proporcion es 1:1, los moles de EDTA equivalen a los moles del ion calcio (Ca2+)
	
	Calcio_agua=n_edta*PM_Ca*1000/(V_muestra*1e-3);
	
	printf("La cantidad de calcio presente en la muestra de agua es %f partes por millon\n", Calcio_agua);
	
	if (Calcio_agua<0) {
		printf("No procede ya que la cantidad de calcio en agua no puede ser negativa\n");
	}
	else if (Calcio_agua<=17) {
		printf("El agua es blanda\n");
	}
	else if (Calcio_agua>17 && Calcio_agua<=60) {
		printf("El agua es levemente dura\n");
	}
	else if (Calcio_agua>60 && Calcio_agua<=120) {
		printf("El agua es moderadamente dura\n");
	}
	else if (Calcio_agua>120 && Calcio_agua<=180) {
		printf("El agua es dura\n");
	}
	else (Calcio_agua>180) {
		printf("El agua es muy dura\n");
	}
	
	return 0;
	
}
