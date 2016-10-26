--Calcula el segundo termino
metodoSecanteCalculo :: (Ord a, Num a, Show a, Fractional a) => a -> a -> a
metodoSecanteCalculo x0 yi = x0 - (testFuncion x0 yi) / (testFuncionPrima x0 yi)

--Funcion método Secante
metodoSecante :: (Ord a, Num a, Show a, Fractional a) => a -> a -> a -> a -> a -> [a]
metodoSecante x0 0 e1 e2 yi = metodoSecante x0 (metodoSecanteCalculo x0 yi) e1 e2 yi
metodoSecante x0 x1 e1 e2 yi = if (abs (testFuncion x yi)) < (e2/100) || (abs (x-x0)) < (e1/100) then x:[] else x:[] ++ (metodoSecante x1 x e1 e2 yi) where x = x1 - ((((x1-x0)/((testFuncion x1 yi) - (testFuncion x0 yi)))) * (testFuncion x1 yi))

--La funcion 
testFuncion :: (Ord a, Num a, Show a, Fractional a)  => a -> a -> a
testFuncion x yi = (x*x*x) - (4*x) - yi

testFuncionPrima :: (Ord a, Num a, Show a, Fractional a)  => a -> a -> a
testFuncionPrima x yi = (3*x*x) - 4