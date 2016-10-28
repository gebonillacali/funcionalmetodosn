def metodoBiseccion( a, b, e1, e2, yi ):
   "Implementa el método de Biseccion"
   salida = [];
   while (True):
      c = (a+b)/2;
      print (c);
      salida.append(c);
      if (abs(testFuncion(c,yi))<(e2/100)):
         break;
      if (abs(b-a)<(e1/100)):
         break;
      
      if ((testFuncion(a,yi) * testFuncion(c,yi)) < 0):
      	b = c;
      else:
      	a = c;
   
   return salida;

def testFuncion(x, yi):
   return x**3 - (4*x) - yi;

print (metodoBiseccion(0.5,10,0.5,0.5,0))