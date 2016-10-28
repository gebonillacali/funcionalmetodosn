def metodoNewtonRaphson( x0, e1, e2, yi ):
   "Implementa el método de Newton Raphson"
   salida = [];
   while (True):
      x = x0 - (testFuncion (x0, yi) / testFuncionPrima(x0));
      print (x);
      salida.append(x);
      if (abs(testFuncion(x,yi))<(e2/100)):
         break;
      if (abs(x-x0)<(e1/100)):
         break;
      x0 = x;
   
   return salida;

def testFuncion(x, yi):
   return x**3 - (4*x) - yi;

def testFuncionPrima(x):
   return 3*(x**2) - 4;

print (metodoNewtonRaphson(0.5,0.05,0.05,0))