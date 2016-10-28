--Funcion método NewtonRaphson
metodoNewtonRaphson :: (Ord a, Num a, Show a, Fractional a) => a -> a -> a -> a -> [a]
metodoNewtonRaphson x0 e1 e2 yi = if (abs (testFuncion x yi)) < (e2/100) || (abs (x-x0)) < (e1/100) then x:[] else x:[] ++ (metodoNewtonRaphson x e1 e2 yi) where x = x0 - (testFuncion x0 yi) / (testFuncionPrima x0 yi)

--La funcion 
testFuncion :: (Ord a, Num a, Show a, Fractional a)  => a -> a -> a
testFuncion x yi = (x*x*x) - (4*x) - yi

testFuncionPrima :: (Ord a, Num a, Show a, Fractional a)  => a -> a -> a
testFuncionPrima x yi = (3*x*x) - 4