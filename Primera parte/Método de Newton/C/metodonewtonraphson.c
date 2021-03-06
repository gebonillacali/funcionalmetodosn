#include <stdio.h>
#include <math.h>

int index = 0;

float testFuncion(float x, float yi) {
    return (x*x*x) - (4 *x) - yi;
}

float testFuncionPrima(float x) {
    return (3*x*x) - 4;
}

float * metodoNewtonRaphson(float x0, float e1, float e2, float yi) {
    
    static float salida[10000]; 
    
    while (1) {
		
		float x = x0 - (testFuncion(x0,yi)/testFuncionPrima(x0));
		salida[index] = x;
		index++;
		
		if (fabs(testFuncion(x, yi)) < (e2/100)) {
			break;
		}
		
		if (fabs(x - x0) < (e1/100)) {
			break;
		}
		
        x0 = x;
    }    
    return salida;
}


int main () {
    float *salida = metodoNewtonRaphson(10, 0.5,0.5, 0);
    int n = index;
    int i = 0;
    for (i = 0; i < n ; i++) {
        printf("%f\r\n", salida[i]);
    }
}


