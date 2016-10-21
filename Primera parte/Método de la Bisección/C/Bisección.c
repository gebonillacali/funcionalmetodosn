#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream.h>

double funcion(float X); //declaracion de la funcion.
int main(void){
int SI=1;
do{
system("cls" );
float a=0, b=0,error=0,Xn=0,Xr=0,promedio=0,p=0;
int cont=0;
printf("tt METODO DE BISECCIONn" );
printf("introduce el valor inicial maximo del intervalo decidido:n" );
scanf("%f",&b);
printf("Introduce el valor inicial minimo del intervalo decidid:n" );
scanf("%f",&a);
printf("b a Xr f(b) f(a) f(Xr) errorn" );
Xr=(a+b)/2;
printf("%.2f %.2f %.2fn",b,a,Xr);
do{
promedio=funcion(b)*funcion(Xr);
if(promedio==0)
printf("La raiz es %f",a);
else
if(promedio<0)
a= Xr;
else
b= Xr;
Xn=(a+b)/2;
error=fabs((Xn-Xr)/Xn)*100;
printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f%n",b,a,Xn,funcion(b),funcion(a),funcion(Xr),error);
Xr=Xn;
cont++;
}while(cont<6);
printf("DESEAS REALIZAR LA OPERACION OTRA VEZ? SI[1] NO[2]n" );
scanf("%d",&SI);

}while(SI<=1);
system("PAUSE" );
return 0;
}

double funcion(float X){ //funcion que desp es llamada dentro del main.
return pow(X,3)-4*pow(X,1);
}
//fin del programa. 