def metodoFalsaPosicion(a,b, e1, e2, yi ):
   "Implementa el método de Falsa Posicion"
   salida = [];
   while (True):
   	c = b - ((testFuncion(b,yi)*(b-a)) / (testFuncion(b,yi) - testFuncion(a,yi)));
   	salida.append(c);
   	print(c);
   	if (abs(testFuncion(c,yi)) < e2):
   		break;
   	if (abs(b-a) < e1):
   		break;
   	if ((testFuncion(c,yi) * testFuncion(b,yi)) > 0):
   		a = c;
   	if ((testFuncion(c,yi) * testFuncion(a,yi)) > 0):
   		b = c
   return salida;

def testFuncion(x, yi):
   return x**3 - (4*x) - yi;

print(metodoFalsaPosicion(0.5, 4, 0.005,0.005, 0));
