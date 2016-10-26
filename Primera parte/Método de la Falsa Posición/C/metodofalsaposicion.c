#include <stdio.h>
#include <math.h>

int index = 0;

float testFuncion(float x, float yi) {
    return (x*x*x) - (4 *x) - yi;
}

float * metodoFalsaPosicion(float a, float b, float e1, float e2, float yi) {
    
    static float salida[10000]; 
    
    while (1) {
		
		float c = b - ((testFuncion(b, yi) * (b-a)) / (testFuncion(b, yi) - testFuncion(a, yi)));
		salida[index] = c;
		index++;
		
		if (fabs(testFuncion(c, yi)) < (e2/100)) {
			break;
		}
		
		if (fabs(b - a) < (e1/100)) {
			break;
		}
        
		
        if ((testFuncion(a, yi) * testFuncion(c, yi)) < 0) {
            b = c;
        } else {
            a = c;
        }
        
    }    
    return salida;
}


int main () {
    float *salida = metodoFalsaPosicion(1, 10, 0.5,0.5, 0);
    int n = index;
    int i = 0;
    for (i = 0; i < n ; i++) {
        printf("%f\r\n", salida[i]);
    }
}