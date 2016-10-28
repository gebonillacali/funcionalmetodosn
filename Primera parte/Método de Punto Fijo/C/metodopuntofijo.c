#include <stdio.h>
#include <math.h>

int index = 0;

float testFuncion(float x, float yi) {
    return yi / (x*x) - 4;
}

float * metodoPuntoFijo(float x0, float e1, float e2, float yi) {
    
    static float salida[10000]; 
    float x = testFuncion(x0, yi);
	salida[index] = x;
    index++;
    while (1) {
		
		if (fabs(testFuncion(x, yi)) < (e2/100)) {
			break;
		}
		
		if (fabs(x - x0) < (e1/100)) {
			break;
		}
		
		x0 = x;
		x = testFuncion(x0, yi);
		salida[index] = x;
		index++;
		
    }    
    return salida;
}


int main () {
    float *salida = metodoPuntoFijo(100, 0.5,0.5, 2);
    int n = index;
    int i = 0;
    for (i = 0; i < n ; i++) {
        printf("%f\r\n", salida[i]);
    }
}