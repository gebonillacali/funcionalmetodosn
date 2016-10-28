--Funcion método Punto Fijo
metodoPuntoFijo :: (Ord a, Num a, Show a, Fractional a) => a -> a -> a -> a -> [a]
metodoPuntoFijo x0 e1 e2 yi = if (abs (testFuncion x yi)) < (e2/100) || (abs (x-x0)) < (e1/100) then x:[] else x:[] ++ (metodoPuntoFijo x e1 e2 yi) where x = (testFuncion x0 yi)

--La funcion g(x) = (x3 - yi) / 4
testFuncion :: (Ord a, Num a, Show a, Fractional a)  => a -> a -> a
testFuncion x yi = yi/((x*x)-4)