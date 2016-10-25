#include <stdio.h>
#include <math.h>

int getArraySize(float *array) {
    return sizeof(array) / sizeof(array);
}


float * addItemToArray(float item, float *array) {
    float *newArray;
    
    int tamanoActual = getArraySize(array);
    printf("TamAct:%d \r\n",tamanoActual);
    if (tamanoActual == 1) {
        array[0] = item;
        return array;
    } else {
        array = malloc(sizeof(float) * (tamanoActual + 1));
        int i = 0;
        for (i = 0; i < tamanoActual; i++) {
            array[i] = array[i];
        }
        array[tamanoActual] = item;
        return newArray;
    }
}


int checkError(float xActual, float xAnterior, float error) {
    return fabs((xActual - xAnterior)/xActual) * 100 < error;
}

float testFuncion(float x, float yi) {
    return (x*x*x) - (4 *x) - yi;
}

float * metodoFalsaPosicion(float a, float b, float e1, float e2, float yi) {
    float xActual = a;
    float *salida = malloc(sizeof(float) * 1);
    do {
        xActual = b - ((testFuncion(b, yi) * (a-b))/(testFuncion(a, yi) - testFuncion(b, yi)));
        if ((testFuncion(a, yi) * testFuncion(xActual, yi)) > 0) {
            a = xActual;
        } else {
            if((testFuncion(a, yi) * testFuncion(xActual, yi)) < 0) {
                b = xActual;
            } 
            else {
                if((testFuncion(a, yi) * testFuncion(xActual, yi)) == 0)
                    break;
            }
        }
        salida = addItemToArray(xActual, salida);
    }
    while (!checkError(xActual, a, e1) && testFuncion(xActual, yi) < e2);
    return salida;
}


int main () {
    float * salida = metodoFalsaPosicion(1, 4, 0.0005,0.0005, 0);
    int n = getArraySize(salida);
    int i = 0;
    for (i = 0; i < n ; i++) {
        printf("%f\r\n", salida[i]);
    }
}


