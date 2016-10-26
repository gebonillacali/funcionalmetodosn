#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

double funcion(float X); //declaracion de la funcion.
int main(void) {
	int SI = 1;
	do {
		system("cls");
		float a = 0, b = 0, e1 = 0, e2 = 0, Yi = 0, Xn = 0, Xa = 0, Xr = 0, promedio = 0, x[50];
		int cont = 0;
		printf("tt METODO DE BISECCIÓN \n");
		printf("Introduce el valor inicial minimo del intervalo decidido:\n");
		scanf("%f", &a);
		printf("introduce el valor inicial maximo del intervalo decidido:\n");
		scanf("%f", &b);
		printf("Introduce el valor de la toleracia absoluta:\n");
		scanf("%f", &e1);
		printf("Introduce el valor de la toleracia relativa:\n");
		scanf("%f", &e2);
		printf("Introduce el valor de la Yi:\n");
		scanf("%f", &Yi);
		printf("b a Xr f(b) f(a) f(Xr) e1 e2\n");
		e1 = e1 / 100;
		e2 = e2 / 100;

		printf("%.2f %.2f %.2f %f %f \n", a, b, Xr, e1, e2);
		do {
			Xr = (a + b) / 2;
			promedio = funcion(b,Yi)*funcion(Xr,Yi);
			if (promedio < 0) {
				a = Xr;
			}	
			else {
				b = Xr;
			}	
			Xn = (a + b) / 2;
			x[cont] = Xn;
			printf("%3f \n", x[cont]);
			cont = cont + 1;
		} while (fabs(funcion(Xn,Yi))>=e2);
		printf("DESEAS REALIZAR LA OPERACION OTRA VEZ? SI[1] NO[2]\n");
		scanf("%d", &SI);

	} while (SI <= 1);
	
	system("PAUSE");
	return 0;
}

double funcion(float X, float Yi) { //funcion que desp es llamada dentro del main.
	return pow(X, 3) - 4 * pow(X, 1) - Yi;
}
//fin del programa. 