def metodoPuntoFijo( x0, e1, e2, yi ):
   "Implementa el método de Punto Fijo"
   salida = [];
   x = testFuncion(x0, yi);
   salida.append(x);
   
   while (True):
   	if (testFuncion(x, yi) < (e2/100)):
   		break;
   	if (abs(x-x0) < (e1/100)):
   		break;
   	x0 = x;
   	x = testFuncion(x0,yi);
   	salida.append(x);
   return salida;

def testFuncion(x, yi):
   return (x**3 - yi) / 4;

print(metodoPuntoFijo(0.05, 0.005,0.005, 0));

