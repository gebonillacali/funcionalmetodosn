--Funcion método Secante
metodoFalsaPosicion :: (Ord a, Num a, Show a, Fractional a) => a -> a -> a -> a -> a -> [a]
metodoFalsaPosicion a b e1 e2 yi = if (abs (testFuncion c yi)) < (e2/100) || (abs (b-a)) < (e1/100) then c:[] else if ((testFuncion c yi) * (testFuncion a yi)) < 0 then c:[] ++ (metodoFalsaPosicion a c e1 e2 yi) else c:[] ++ (metodoFalsaPosicion c b e1 e2 yi) where c = b - (((testFuncion b yi) * (b-a)) / ((testFuncion b yi) - (testFuncion a yi)))

--La funcion 
testFuncion :: (Ord a, Num a, Show a, Fractional a)  => a -> a -> a
testFuncion x yi = (x*x*x) - (4*x) - yi