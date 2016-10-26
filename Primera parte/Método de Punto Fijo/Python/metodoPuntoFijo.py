def metodoPuntoFijo( x0, e1, e2, yi ):
   "Implementa el método de Punto Fijo"
   salida = [];
   x = testFuncion(x0, yi);
   salida.append(x);
   
   while (abs(x-x0) > e1):
    x0 = x
    x = testFuncion(x0,yi);
    salida.append(x);
   return salida;

def testFuncion(x, yi):
   return (x**3 - yi) / 4;

print(metodoPuntoFijo(1, 0.0005,0.0005, 0));
