--Implementación método de Bisección
metodoBiseccion :: (Fractional a, Eq a, Ord a, Show a)  => a -> a -> a -> a -> a -> [a]
metodoBiseccion a b e1 e2 yi = if (checkError a b (e1/100)) || (abs (testFuncion c yi)) <= (e2/100) then c:[] else if ((testFuncion a yi) * (testFuncion c yi)) > 0 then c:[] ++ (metodoBiseccion a c e1 e2 yi) else c:[] ++ (metodoBiseccion c b e1 e2 yi) where c = (calcularMedia a b)

--Calcula la media por definición (a+b)/2
calcularMedia :: (Fractional a) => a -> a -> a
calcularMedia a b = (a + b) / 2

--Calcula y valida el error (|b-a|/2) < error
checkError :: (Ord a, Num a, Fractional a, Show a) => a -> a -> a -> Bool
checkError a b e1 = abs ((b-a) / 2) <= e1

--La funcion f(x) = x3 - 4x
testFuncion :: (Ord a, Num a, Show a)  => a -> a -> a
testFuncion x yi = (x * x * x) - (x * 4) - yi
