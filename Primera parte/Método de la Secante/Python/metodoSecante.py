def metodoSecante( x0, e1, e2, yi ):
   "Implementa el método de la Secante"
   salida = [];
   x1 = x0 - (testFuncion (x0, yi) / testFuncionPrima(x0));
   while (True):      
      x = x1 - (((x1-x0)/(testFuncion(x1,yi)-testFuncion(x0,yi))) * testFuncion(x1,yi));
      salida.append(x);
      if (abs(testFuncion(x,yi))<(e2/100)):
         break;
      if (abs(x-x0)<(e1/100)):
         break;
      x0 = x1;
      x1 = x;
   return salida;

def testFuncion(x, yi):
   return x**3 - (4*x) - yi;

def testFuncionPrima(x):
   return 3*(x**2) - 4;

print (metodoSecante(100,0.05,0.05,0))